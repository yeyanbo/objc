//
//  Line.m
//  markdown
//
//  Created by yeyanbo on 13-11-18.
//  Copyright (c) 2013年 ye. All rights reserved.
//

#import "Line.h"

@implementation Line

- (id) initWithString:(NSString *) text{
    if (self = [super init]) {
        _text = text;
        _next = nil;
    };
    
    return self;
}

@end
