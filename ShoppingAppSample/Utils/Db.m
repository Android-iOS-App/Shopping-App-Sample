//
// Created by iOS Developer on 5/25/15.
// Copyright (c) 2015 iOS Developer. All rights reserved.
//

#import "Db.h"
#import "AppDelegate.h"


@implementation Db

+ (NSString *)getDatabasePath
{
    NSString *databasePath = [(AppDelegate *)[[UIApplication sharedApplication] delegate] databasePath];
    return databasePath;
}

@end