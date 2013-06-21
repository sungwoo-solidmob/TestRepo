//
//  SMMasterViewController.h
//  TestRepo
//
//  Created by asmera on 13. 6. 21..
//  Copyright (c) 2013년 Solid Mobile. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SMDetailViewController;

@interface SMMasterViewController : UITableViewController

@property (strong, nonatomic) SMDetailViewController *detailViewController;

@end
