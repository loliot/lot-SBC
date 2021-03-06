/*
 * MIT License
 * Copyright (c) 2019-2020 Hyeonki Hong <hhk7734@gmail.com>
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
namespace gpio
{
    /**
     * @brief Initializes GPIO.
     */
    void init( void );

    /**
     * @brief Sets a pin mode.
     * @param pin
     * @param pin_mode \n
     *      This parameter can be a value of @ref GpioMode.
     */
    void mode( int pin, GpioMode pin_mode );

    /**
     * @brief Gets a pin mode.
     * @param pin
     * @return Pin mode.
     */
    GpioMode mode( int pin );

    /**
     * @brief Sets a pin pull-up-down mode.
     * @param pin
     * @param pud \n
     *      This parameter can be a value of @ref PUDMode.
     */
    void pull_up_down( int pin, PUDMode pud );

    /**
     * @brief Gets a pin pull-up-down mode.
     * @param pin
     * @return Pull-up-down mode.\n
     *      This return can be a value of @ref PUDMode.
     */
    PUDMode pull_up_down( int pin );

    /**
     * @brief Sets a pin drive strength.
     * @param pin
     * @param pin_drive Drive strength.
     */
    void drive( int pin, uint32_t pin_drive );

    /**
     * @brief Gets a pin drive strength.
     * @param pin
     * @return Drive strength.
     */
    uint32_t drive( int pin );

    /**
     * @brief Writes a HIGH or a LOW value to a pin.
     * @param pin
     * @param status
     */
    void digital( int pin, int status );

    /**
     * @brief Reads a value from a pin.
     * @param pin
     * @return digital status
     */
    int digital( int pin );

    /**
     * @brief Writes an analog value to a pin.
     * @param pin
     * @param value
     */
    void analog( int pin, int value );

    /**
     * @brief Reads an analog value from a pin.
     * @param pin
     * @return analog value
     */
    int analog( int pin );
}    // namespace gpio
}    // namespace lot