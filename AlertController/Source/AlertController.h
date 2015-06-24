//
//  AlertController.h
//  AlertController
//
//  Created by Dylan Bettermann on 6/23/15.
//  Copyright (c) 2015 Dylan Bettermann. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AlertController : UIAlertController

- (void)show;

- (void)show:(BOOL)animated;

- (void)show:(BOOL)animated completion:(void (^)(void))completion;

@end
