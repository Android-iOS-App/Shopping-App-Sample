//
//  AppDelegate.h
//  ShoppingCartExample
//
//  Created by iOS Developer on 5/22/15.
//  Copyright (c) 2015 iOS Developer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) UITabBarController *tabBarController;
@property (nonatomic,strong) NSString *databasePath;

-(void) createAndCheckDatabase;
-(BOOL) addSkipBackupAttributeToItemAtURL;

-(void) setupTabBarItems;
-(void) updateCartTabBadge;

@end