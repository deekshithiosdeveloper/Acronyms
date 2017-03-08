//
//  AIMeaning.h
//  Acronym
//
//  Created by Deekshith Kasturi on 03/06/17.
//  Copyright (c) 2017 Deekshith Kasturi All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AIMeaning : NSObject
@property (nonatomic, copy) NSString *meaning;
@property NSInteger frequency;
@property NSInteger since;
@property (nonatomic, copy) NSMutableArray *variations;

@end
