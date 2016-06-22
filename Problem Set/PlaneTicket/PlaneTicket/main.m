//
//  main.m
//  PlaneTicket
//
//  Created by Gabrielle Miller-Messner on 4/12/16.
//  Copyright © 2016 Gabrielle Miller-Messner. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Passenger.h"
#import "PlaneTicket.h"


int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
        NSMutableString *name = [[NSMutableString alloc] initWithString: @"Dan Huang"];
        NSMutableString *departureCity = [[NSMutableString alloc] initWithString: @"Denver"];
        NSMutableString *destination = [[NSMutableString alloc] initWithString: @"Oakland"];
        NSMutableString *passenger = [[Passenger alloc] initWithName: name] ;
        
        
    }
    return 0;
}
