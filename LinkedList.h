//
//  LinkedList.h
//
//  单向链表

#import <Foundation/Foundation.h>
#import "Line.h"

@interface LinkedList : NSObject

@property Line *first;
@property Line *last;
@property NSArray *array;

- (void) attach: (Line *)line;
@end


@implementation LinkedList

- (id) init {
    if(self = [super init]){
        _first = nil;
        _last  = nil;
    };
    return self;
}

- (void) attach: (Line *)line{
    (_first.text) ? (_last.next = line, _last = line) : (_first = _last = line);
}

@end
