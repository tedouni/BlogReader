//
//  WebViewController.h
//  BlogReader
//
//  Created by Tayseer Edouni on 1/20/15.
//  Copyright (c) 2015 Tayseer Edouni. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WebViewController : UIViewController
@property (strong,nonatomic) NSURL* blogPostURL;
@property (strong, nonatomic) IBOutlet UIWebView *webView;


@end
