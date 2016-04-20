//
//  ProductCell.h
//  ShoppingCartExample
//
//  Created by iOS Developer on 5/31/15.
//  Copyright (c) 2015 iOS Developer. All rights reserved.
//

#import "BButton.h"

@interface ProductCartCell : UITableViewCell
@property (strong, nonatomic) IBOutlet UIImageView *productImage;
@property (strong, nonatomic) IBOutlet UILabel *productTitle;
@property (strong, nonatomic) IBOutlet UILabel *productPrice;
@property (strong, nonatomic) IBOutlet UILabel *quantity;
@property (strong, nonatomic) IBOutlet BButton *deleteButton;

@end
