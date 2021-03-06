//
//  PYJEnemySprite.h
//  GamePlay
//
//  Created by Bennett Lee on 2/20/14.
//  Copyright (c) 2014 ITP382RBBM. All rights reserved.
//

#import "GB2Sprite.h"

@class PYJSpriteLayer;

typedef enum {
    kAttack,
    kFall,
} EnemyState;


@interface PYJEnemySprite : GB2Sprite {
    NSString *m_Theme;
    BOOL removed;
    
    int animPhase;
    int animDir;
    ccTime animDelay;
}
@property int enemyPointValue;
@property EnemyState state;

// Reference to touch on the enemy
@property NSInteger touchHash;

// Audio
+ (void)playAttackAudio;
- (void)playLaunchAudio;

- (BOOL)intersectsWithPoint:(CGPoint)ccLocation;
- (void)updateTouch:(UITouch *)touch;
- (id)initWithTheme:(NSString *)theme;

// Use for multi-touch tracking
- (BOOL)hasTouch:(UITouch *)touch;

// Update collision filters
- (void)canCollideWithJewel:(BOOL)jewelCollision;

@end
