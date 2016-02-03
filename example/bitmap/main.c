/*
 * This file is part of eVic SDK.
 *
 * eVic SDK is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * eVic SDK is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with eVic SDK.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Copyright (C) 2016 ReservedField
 */

#include <M451Series.h>
#include <Display.h>

// Generated by:
// $EVICSDK/tools/img-convert --invert Bitmap_evicSdk bitmap-evic-sdk.png > Bitmap_eVicSDK.h
#include "Bitmap_eVicSDK.h"

int main() {
	// Blit bitmap
	Display_PutPixels(0, 32, Bitmap_evicSdk, Bitmap_evicSdk_width, Bitmap_evicSdk_height);

	// Update display
	Display_Update();
}