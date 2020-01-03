/*
 * MIT License
 * Copyright (c) 2019 Hyeonki Hong <hhk7734@gmail.com>
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#pragma once

#include "lotdef.h"

namespace lot
{
/**
 * @brief Initializes registers or variables about time.
 */
void lot_time_init( void );

/**
 * @brief Pauses program for the amount of time in microseconds.
 * @param us Minimum pause time in microseconds.
 */
void delay_us( uint32_t us );

/**
 * @brief Pauses program for the amount of time in milliseconds.
 * @param us Minimum pause time in milliseconds.
 */
void delay_ms( uint32_t ms );

/**
 * @brief Returns the number of microseconds since program called init() function.
 * @return The number of microseconds.
 */
uint32_t micros( void );

/**
 * @brief Returns the number of milliseconds since program called init() function.
 * @return The number of milliseconds.
 */
uint32_t millis( void );
}    // namespace lot
