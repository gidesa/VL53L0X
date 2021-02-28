#ifndef _TOFLIB_H_
#define _TOFLIB_H_
//
// Copyright (c) 2017 Larry Bank
// email: bitbank@pobox.com
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
// 2/2021 - Giandomenico De Sanctis  gidesay@yahoo.com
// -  Modified functions as extern to made a shared library
// -  Added functions tofStartReadDist,  tofReadDistanceAsync that 
//    return soon to caller without waiting cycles

//
// Read the model and revision of the
// tof sensor
//
extern int tofGetModel(int *model, int *revision);

//
// Read the current distance in mm
//

extern int tofReadDistance(void);

//
// Start a reading returning soon to caller
//

extern int tofStartReadDist(void);

//
// Read the distance, this function must be called after 200ms or more
// from the start of reading
//

extern int tofReadDistanceAsync(void);

//
// Opens a file system handle to the I2C device
// sets the device continous capture mode
//
extern int tofInit(int iChan, int iAddr, int bLongRange);

#endif // _TOFLIB_H
