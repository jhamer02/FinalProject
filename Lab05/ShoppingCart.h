//
//  ShoppingCart.h
//  Lab05
//
//  Created by Jorge Jhamil Pineda Echeverria on 01/09/16.
//  Copyright © 2016 jjpe. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PayPalMobile.h"
#import <MessageUI/MessageUI.h>
#import <MessageUI/MFMailComposeViewController.h>

@interface ShoppingCart : UIViewController<MFMailComposeViewControllerDelegate,PayPalPaymentDelegate>
- (IBAction)Pagar:(id)sender;
- (IBAction)DireccionPressed:(id)sender;
- (IBAction)EnvioPressed:(id)sender;


@end
