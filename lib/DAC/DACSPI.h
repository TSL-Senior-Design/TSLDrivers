/**
 * DACSPI.h
 * Devices: LM4F120; TM4C123
 * Description: Low level drivers for the TLV5616CP SPI DAC chip.
 * Authors: Matthew Yu.
 * Last Modified: 03/13/21
 */
#pragma once

/** General imports. */
#include <stdint.h>

/** Device specific imports. */
#include <TM4C123Drivers/lib/SSI/SSI.h>

/**
 * DACSPIInit initializes a given SSI port.
 * @param SSIConfig Struct defining relevant SSI module details for output.
 * @note Multiple DACs can be configured, but the user retains responsibility
 *       for managing the SSI data structures.
 */
void DACSPIInit(SSIConfig_t SSIConfig);

/**
 * DACSPIOut outputs data to the relevant SSI port initialized by DACSPIInit.
 * @param ssi Enum determining which SSI port to output to.
 * @param data A value from 0 - 4096.
 */
void DACSPIOut(enum SSISelect ssi, uint16_t data);