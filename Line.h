//
//  Line.h
//
//  链表中的类，自定义
//

#import <Foundation/Foundation.h>

@interface Line : NSObject

@property NSString *text;
@property Line *next;

- (id) initWithString:(NSString *) text;

@end

@implementation Line

- (id) initWithString:(NSString *) text{
    if (self = [super init]) {
        _text = text;
        _next = nil;
    };
    
    return self;
}

@end