//
//  BLBackGroundLayer.m
//  GamePlay
//
//  Created by Bennett Lee on 2/21/14.
//  Copyright 2014 Bennett Lee. All rights reserved.
//

#import "MSMountainBGLayer.h"

@implementation MSMountainBGLayer

// Init function adds background
- (id)init{
    
    self = [super initWithTheme:@"Mountain"];
    return self;
    
}

- (void) update:(ccTime)dt
{
    [super update:dt];
}

-(void) spawnFrontCloud
{
    [super spawnFrontCloud];
}


-(void) spawnBackCloud
{
    [super spawnBackCloud];
}

@end
