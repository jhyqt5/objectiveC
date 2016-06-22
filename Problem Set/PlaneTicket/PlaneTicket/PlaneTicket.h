//
//  PlaneTicket.h
//  PlaneTicket
//
//  Created by Gabrielle Miller-Messner on 4/12/16.
//  Copyright © 2016 Gabrielle Miller-Messner. All rights reserved.
//



@import Foundation;
#import "Passenger.h"


NS_ASSUME_NONNULL_BEGIN
@interface PlaneTicket : NSObject

@property (nonnull, nonatomic, copy) NSString *departureCity;
@property (nonnull, nonatomic, copy) NSString *destination;
@property (nonnull, nonatomic)       NSDate *departureDate;
@property (nonnull, nonatomic, copy) NSString *seatAssignment;
@property (nonnull, nonatomic) Passenger *passenger;

-(nullable instancetype)initWithDestination:(NSString*)destination
                     departureCity:(NSString*)departureCity
                         passenger:(Passenger*)person
                              date:(NSDate*)departureDate;

@end
NS_ASSUME_NONNULL_END