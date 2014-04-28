//
//  MyScene.h
//  1944
//

//  Copyright (c) 2014 Mark Meyer. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>
#import <CoreMotion/CoreMotion.h>

@interface MyScene : SKScene <UIAccelerometerDelegate, SKPhysicsContactDelegate> {
    CGRect screenRect;
    CGFloat screenHeight;
    CGFloat screenWidth;
    double currentMaxAccelX;
    double currentMaxAccelY;
}

@property (strong, nonatomic) CMMotionManager *motionManager;
@property SKSpriteNode *plane;
@property SKSpriteNode *planeShadow;
@property SKSpriteNode *propeller;

@property SKEffectNode *smokeTrail;

@property NSMutableArray *explosionTextures;
@property NSMutableArray *cloudTextures;

@end
