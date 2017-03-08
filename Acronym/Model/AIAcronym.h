//
//  AIAcronym.h
//  Acronym
//
//  Created by Deekshith Kasturi on 03/06/17.
//  Copyright (c) 2017 Deekshith Kasturi All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AIAcronym : NSObject

@property (nonatomic,copy) NSString *shortForm;
@property (nonatomic,strong) NSMutableArray *meanings;
@end
