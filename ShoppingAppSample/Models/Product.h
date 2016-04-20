//
//  Product.h
//  ShoppingCartExample
//
//  Created by iOS Developer on 5/22/15.
//  Copyright (c) 2015 iOS Developer. All rights reserved.
//

@interface Product : NSObject
@property (assign, nonatomic) int id;
@property (strong, nonatomic) NSString *name;
@property (strong, nonatomic) NSString *image;
@property (assign, nonatomic) double price;

- (id)initWithId:(int)productid name:(NSString *)name image:(NSString *)image andPrice:(double) price;
+ (NSMutableArray *)listProducts;
@end