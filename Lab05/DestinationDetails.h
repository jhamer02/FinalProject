//
//  DestinationDetails.h
//  Lab05
//
//  Created by Jorge Jhamil Pineda Echeverria on 29/06/16.
//  Copyright © 2016 jjpe. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Declarations.h"

@interface DestinationDetails : UIViewController

@property NSString *destinationTitle;
@property NSString *destinationDescription;
@property NSString *destinationPhoto;

@property (strong, nonatomic) IBOutlet UIImageView *imgDestination;
@property (strong, nonatomic) IBOutlet UILabel *lblDestination;
@property (strong, nonatomic) IBOutlet UILabel *lblDestinationDetails;
@property (strong, nonatomic) IBOutlet UIButton *addCart;

- (IBAction)btnCarritoPressed:(id)sender;
- (IBAction)btnCartPressed:(id)sender;

@end
