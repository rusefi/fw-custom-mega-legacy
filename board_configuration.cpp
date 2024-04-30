#include "pch.h"

Gpio getCommsLedPin() {
    // TODO: https://github.com/rusefi/fw-custom-mega/issues/1
	return Gpio::Unassigned;
}

Gpio getRunningLedPin() {
	return Gpio::Unassigned;
}

Gpio getWarningLedPin() {
	return Gpio::Unassigned;
}

static void setSdCardSpi3() {
    engineConfiguration->isSdCardEnabled = true;
	engineConfiguration->sdCardSpiDevice = SPI_DEVICE_3;
	engineConfiguration->spi3mosiPin = Gpio::C12;
	engineConfiguration->spi3misoPin = Gpio::C11;
	engineConfiguration->spi3sckPin = Gpio::C10;
	engineConfiguration->is_enabled_spi_3 = true;
	engineConfiguration->sdCardCsPin = Gpio::D2;
}

// board-specific configuration setup
void setBoardDefaultConfiguration() {
	// Battery sense on PA2
	engineConfiguration->vbattAdcChannel = EFI_ADC_2;

	// all analog inputs have same divider on-board, we assume additional divider for vbatt on carrier board
	    	// 6.34k high side/ 1k low side
    //    	engineConfiguration->vbattDividerCoeff = (6.34 + 1) / 1;

    // same 470 and 910 on all analog inputs
   	engineConfiguration->analogInputDividerCoefficient = 1.55f;
	engineConfiguration->adcVcc = 3.3f;

	setSdCardSpi3();

    // engineConfiguration->injectionPins[0] = Gpio::F13;
    // engineConfiguration->ignitionPins[0] = Gpio::E15;

//   engineConfiguration->triggerInputPins[0] = Gpio::B1;
//	engineConfiguration->triggerInputPins[1] = Gpio::Unassigned;

//	engineConfiguration->map.sensor.hwChannel = EFI_ADC_3;

//	engineConfiguration->clt.adcChannel = EFI_ADC_1;

//	engineConfiguration->iat.adcChannel = EFI_ADC_2;



//	engineConfiguration->clt.config.bias_resistor = 2490;
//	engineConfiguration->iat.config.bias_resistor = 2490;


}