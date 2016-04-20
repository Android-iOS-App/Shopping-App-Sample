//
//  CartViewController.h
//  ShoppingCartExample
//
//  Created by iOS Developer on 6/1/15.
//  Copyright (c) 2015 iOS Developer. All rights reserved.
//

#import "PayPalPaymentViewController.h"

@interface CartViewController : UITableViewController<PayPalPaymentDelegate>
- (instancetype)initWithCoder:(NSCoder *)aDecoder;
- (void)loadItems;
@end
