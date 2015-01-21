//
//  BlogPost.h
//  BlogReader
//
//  Created by Tayseer Edouni on 1/19/15.
//  Copyright (c) 2015 Tayseer Edouni. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BlogPost : NSObject
@property (nonatomic,strong) NSString *title;
@property (nonatomic,strong) NSString *author;
@property (nonatomic,strong) NSString *thumbnail;
@property (nonatomic,strong) NSString *date;
@property (nonatomic,strong) NSURL *url;

- (id) initWithTitle :(NSString *) title;
+ (id) blogPostWithTitle: (NSString *) title;

-(NSURL *) thumbnailURL;
-(NSString *) formattedData;
@end
