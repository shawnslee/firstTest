//
//  ViewController.h
//  testingAlerView
//
//  Created by Shawn Lee on 11/4/14.
//  Copyright (c) 2014 Shawn Lee. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UITextField *textField2;

- (IBAction)printTextButton:(id)sender;
- (IBAction)printTextButton2:(id)sender;
- (IBAction)deleteAll:(id)sender;


@end

