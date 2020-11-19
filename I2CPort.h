/*
 *   Copyright (C) 2020 by Jonathan Naylor G4KLX
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include "Config.h"

#if defined(MODE_OLED) || defined(I2C_REPEATER)

#if !defined(I2CPORT_H)
#define  I2CPORT_H

#include <cstdint>


class CI2CPort {
public:
  CI2CPort(uint8_t n);

  bool init();

  uint8_t writeCommand(const uint8_t* data, uint8_t length);

  uint8_t writeData(const uint8_t* data, uint8_t length);

private:
  uint8_t m_n;
  bool    m_ok;
};

#endif

#endif

