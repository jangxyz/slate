//
//  Layout.h
//  Slate
//
//  Created by Jigish Patel on 6/13/11.
//  Copyright 2011 Jigish Patel. All rights reserved.
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see http://www.gnu.org/licenses

#import <Foundation/Foundation.h>


@interface Layout : NSObject {
@private
  NSString *name;
  NSMutableDictionary *appStates;
  NSMutableDictionary *appOptions;
  NSMutableArray *appOrder;
  NSMutableArray *before;
  NSMutableArray *after;
}

@property (copy) NSString *name;
@property NSMutableDictionary *appStates;
@property NSMutableDictionary *appOptions;
@property NSMutableArray *appOrder;
@property NSMutableArray *before;
@property NSMutableArray *after;

- (id)initWithString:(NSString *)layout;
- (void)addWithString:(NSString *)layout;

@end
