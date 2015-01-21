//
//  TableViewController.h
//  BlogReader
//
//  Created by Tayseer Edouni on 1/19/15.
//  Copyright (c) 2015 Tayseer Edouni. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BlogPost.h"
#import "WebViewController.h"

@interface TableViewController : UITableViewController
@property (nonatomic, strong) NSMutableArray *blogPosts;


@end
