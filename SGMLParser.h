//
//  SGMLParser.h
//
//  Created by Benjamin Humphries on 4/12/16.
//  Copyright © 2016 Marz Software. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Stack.h"

@interface SGMLParser : NSObject

- (NSDictionary *)parseXMLString:(NSString *)xmlString;

@end
