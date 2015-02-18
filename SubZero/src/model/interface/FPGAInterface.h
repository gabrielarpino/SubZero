/*
 * FPGAInterface.h
 *
 *  Created on: Jan 17, 2015
 *      Author: ahsueh1996
 */

#ifndef FPGAINTERFACE_H_
#define FPGAINTERFACE_H_

#include "HwInterface.h"

/**
 * A child of HwInterface that deals specifically with the FPGA. Concrete class.
 */
class FPGAInterface: public HwInterface {
public:
	FPGAInterface();
	/**
	 * Constructor
	 */
	virtual ~FPGAInterface();
	/**
	 * Deconstructor
	 */
};


#endif /* FPGAINTERFACE_H_ */
