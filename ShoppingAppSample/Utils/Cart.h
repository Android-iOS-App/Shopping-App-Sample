//
//  Cart.h
//  ShoppingCartExample
//
//  Created by iOS Developer on 5/22/15.
//  Copyright (c) 2015 iOS Developer. All rights reserved.
//

#import "Product.h"

@class CartItem;

@interface Cart : NSObject
+(double)totalAmount;
+(int)totalProducts;
+(NSMutableArray *)contents;
+(CartItem *)getProduct:(int)productid;
+(BOOL)removeProduct:(Product *)product;
+(BOOL)addProduct:(Product *)product;
+(BOOL)addProduct:(Product *)product quantity:(int) quantity;
+(BOOL)exists:(Product *)product;
+(BOOL)isEmpty;
+(BOOL)clearCart;
@end