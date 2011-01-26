//
//  ELCSlider.h
//  ELCSiderController
//
//  Created by Collin Ruffenach on 10/27/10.
//  Copyright 2010 ELC Technologies. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SliderValueViewController.h"

@interface ELCSlider : UISlider {
    BOOL dismissPopoverOnTouchUp;

	UIPopoverController *popoverController;
	SliderValueViewController *sliderValueController;
}

@property BOOL dismissPopoverOnTouchUp;

@end
