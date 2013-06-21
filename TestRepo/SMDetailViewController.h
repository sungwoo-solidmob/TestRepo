//
//  SMDetailViewController.h
//  TestRepo
//
//  Created by asmera on 13. 6. 21..
//  Copyright (c) 2013년 Solid Mobile. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SMDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
