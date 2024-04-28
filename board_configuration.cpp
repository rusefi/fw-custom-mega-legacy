#include "pch.h"

Gpio getCommsLedPin() {
	return Gpio::Unassigned;
}

Gpio getRunningLedPin() {
	return Gpio::Unassigned;
}

Gpio getWarningLedPin() {
	return Gpio::Unassigned;
}

// board-specific configuration setup
void setBoardDefaultConfiguration() {
	// Battery sense on PA2
	engineConfiguration->vbattAdcChannel = EFI_ADC_2;

	// all analog inputs have same divider on-board, we assume additional divider for vbatt on carrier board
	    	// 6.34k high side/ 1k low side
    //    	engineConfiguration->vbattDividerCoeff = (6.34 + 1) / 1;

    // same 470 and 910 on all analog inputs
    	// 5.6k high side/10k low side = 1.56 ratio divider
  //  	engineConfiguration->analogInputDividerCoefficient = 1.56f;


//	engineConfiguration->adcVcc = 3.3f;


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