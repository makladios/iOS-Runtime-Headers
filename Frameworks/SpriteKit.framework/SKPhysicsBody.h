/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@class NSArray, SKNode;

@interface SKPhysicsBody : NSObject <NSCopying, NSCoding> {
    struct CGVector { 
        float dx; 
        float dy; 
    BOOL _affectedByGravity;
    BOOL _allowsRotation;
    float _angularDamping;
    float _angularVelocity;
    float _area;
    unsigned int _categoryBitMask;
    unsigned int _collisionBitMask;
    unsigned int _contactTestBitMask;
    float _density;
    BOOL _dynamic;
    float _friction;
    NSArray *_joints;
    float _linearDamping;
    float _mass;
    SKNode *_node;
    BOOL _resting;
    float _restitution;
    BOOL _usesPreciseCollisionDetection;
    } _velocity;
}

@property BOOL affectedByGravity;
@property BOOL allowsRotation;
@property float angularDamping;
@property float angularVelocity;
@property(readonly) float area;
@property unsigned int categoryBitMask;
@property unsigned int collisionBitMask;
@property unsigned int contactTestBitMask;
@property float density;
@property(getter=isDynamic) BOOL dynamic;
@property float friction;
@property(readonly) NSArray * joints;
@property float linearDamping;
@property float mass;
@property(readonly) SKNode * node;
@property(getter=isResting) BOOL resting;
@property float restitution;
@property BOOL usesPreciseCollisionDetection;
@property struct CGVector { float x1; float x2; } velocity;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)bodyWithBodies:(id)arg1;
+ (id)bodyWithCircleOfRadius:(float)arg1 center:(struct CGPoint { float x1; float x2; })arg2;
+ (id)bodyWithCircleOfRadius:(float)arg1;
+ (id)bodyWithEdgeChainFromPath:(struct CGPath { }*)arg1;
+ (id)bodyWithEdgeFromPoint:(struct CGPoint { float x1; float x2; })arg1 toPoint:(struct CGPoint { float x1; float x2; })arg2;
+ (id)bodyWithEdgeLoopFromPath:(struct CGPath { }*)arg1;
+ (id)bodyWithEdgeLoopFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (id)bodyWithPolygonFromPath:(struct CGPath { }*)arg1;
+ (id)bodyWithRectangleOfSize:(struct CGSize { float x1; float x2; })arg1 center:(struct CGPoint { float x1; float x2; })arg2;
+ (id)bodyWithRectangleOfSize:(struct CGSize { float x1; float x2; })arg1;
+ (id)copyWithZone:(struct _NSZone { }*)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)affectedByGravity;
- (id)allContactedBodies;
- (BOOL)allowsRotation;
- (float)angularDamping;
- (float)angularVelocity;
- (void)applyAngularImpulse:(float)arg1;
- (void)applyForce:(struct CGVector { float x1; float x2; })arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)applyForce:(struct CGVector { float x1; float x2; })arg1;
- (void)applyImpulse:(struct CGVector { float x1; float x2; })arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)applyImpulse:(struct CGVector { float x1; float x2; })arg1;
- (void)applyTorque:(float)arg1;
- (float)area;
- (unsigned int)categoryBitMask;
- (unsigned int)collisionBitMask;
- (unsigned int)contactTestBitMask;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)density;
- (void)encodeWithCoder:(id)arg1;
- (float)friction;
- (id)initWithCoder:(id)arg1;
- (BOOL)isDynamic;
- (BOOL)isResting;
- (id)joints;
- (float)linearDamping;
- (float)mass;
- (id)node;
- (float)restitution;
- (void)setAffectedByGravity:(BOOL)arg1;
- (void)setAllowsRotation:(BOOL)arg1;
- (void)setAngularDamping:(float)arg1;
- (void)setAngularVelocity:(float)arg1;
- (void)setCategoryBitMask:(unsigned int)arg1;
- (void)setCollisionBitMask:(unsigned int)arg1;
- (void)setContactTestBitMask:(unsigned int)arg1;
- (void)setDensity:(float)arg1;
- (void)setDynamic:(BOOL)arg1;
- (void)setFriction:(float)arg1;
- (void)setLinearDamping:(float)arg1;
- (void)setMass:(float)arg1;
- (void)setResting:(BOOL)arg1;
- (void)setRestitution:(float)arg1;
- (void)setUsesPreciseCollisionDetection:(BOOL)arg1;
- (void)setVelocity:(struct CGVector { float x1; float x2; })arg1;
- (BOOL)usesPreciseCollisionDetection;
- (struct CGVector { float x1; float x2; })velocity;

@end
