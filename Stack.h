//
//  Stack.h
//
//  Created by Benjamin Humphries on 4/12/16.
//  Copyright © 2016 Marz Software. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Stack : NSObject {
    NSMutableArray *array;
}

- (void)push:(NSObject *)object;
- (NSObject *)pop;
- (NSObject *)peek;
- (NSInteger)count;

@end
