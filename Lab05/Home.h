//
//  ViewController.h
//  Lab05
//
//  Created by Andrea Rosas Pérez on 25/06/16.
//  Copyright © 2016 jjpe. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "cellHome.h"
#import "Municipios.h"


@interface Home : UIViewController
@property (strong, nonatomic) IBOutlet UITableView *tblHome;
@property (strong, nonatomic) IBOutlet UIButton *btnCarrito;

- (IBAction)btnCarritoPressed:(id)sender;

@end

