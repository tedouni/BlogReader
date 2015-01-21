//
//  BlogPost.m
//  BlogReader
//
//  Created by Tayseer Edouni on 1/19/15.
//  Copyright (c) 2015 Tayseer Edouni. All rights reserved.
//

#import "BlogPost.h"

@implementation BlogPost
@synthesize author;
@synthesize title;
@synthesize thumbnail;
@synthesize date;
@synthesize url;

- (id) initWithTitle :(NSString *) title
{
    self =  [super init];          //instance of BlogPost
    
    if (self)       //if valid
    {
        self.title = title;      //setter
        self.thumbnail = nil;    //to avoid error if thumbnail doesn't exist
        self.author = nil;       //to avoid error if author doesn't exist
    }
    return self;
}

+ (id) blogPostWithTitle: (NSString *) title
{

    return [[self alloc] initWithTitle:title];
}

-(NSURL *) thumbnailURL
{
    return [NSURL URLWithString:self.thumbnail];
}

-(NSString *) formattedData
{
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc]init];
    [dateFormatter setDateFormat:@"yyyy-MM-dd HH:mm:ss"];
    NSDateFormatter *tempDate = [dateFormatter dateFromString:self.date];
    [dateFormatter setDateFormat:@"EE MM, dd"];
    
    return [dateFormatter stringFromDate:tempDate];
}

@end
