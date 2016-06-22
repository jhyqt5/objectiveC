//
//  Passenger.h
//  PlaneTicket
//
//  Created by Gabrielle Miller-Messner on 4/12/16.
//  Copyright © 2016 Gabrielle Miller-Messner. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@interface Passenger : NSObject

@property (nonnull, nonatomic, copy) NSString *name;
@property (nullable, nonatomic, readonly) NSDate *birthday;

-(nullable instancetype)initWithName:(NSString*)name;

@end
NS_ASSUME_NONNULL_END