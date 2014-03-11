/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIViewSpringAnimationState : UIViewAnimationState {
    float _damping;
    float _mass;
    float _stiffness;
    float _velocity;
}

+ (id)defaultSpringAnimationForKey:(id)arg1 mass:(float)arg2 stiffness:(float)arg3 damping:(float)arg4 velocity:(float)arg5;

- (id)_defaultAnimationForKey:(id)arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3;
- (void)generateSpringPropertiesForDuration:(float)arg1 damping:(float)arg2 velocity:(float)arg3;
- (void)setupWithDuration:(double)arg1 delay:(double)arg2 view:(id)arg3 options:(unsigned int)arg4 factory:(id)arg5 parentState:(id)arg6 start:(id)arg7 completion:(id)arg8;

@end
