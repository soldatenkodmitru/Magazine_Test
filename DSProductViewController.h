//
//  DSProductViewController.h
//  Magazine_Test
//
//  Created by Dima on 11/22/14.
//  Copyright (c) 2014 Dima Soldatenko. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DSReview.h"
#import "DSProduct.h"

@interface DSProductViewController : UIViewController


@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (weak, nonatomic) DSProduct* product;

@end
