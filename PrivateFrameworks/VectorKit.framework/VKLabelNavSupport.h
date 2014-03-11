/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, VKLabelNavRoadGraph, VKPolylineOverlayPainter;

@interface VKLabelNavSupport : NSObject {
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    struct vector<std::__1::shared_ptr<vk::NavLabel>, vk_allocator<std::__1::shared_ptr<vk::NavLabel> > > { 
        struct shared_ptr<vk::NavLabel> {} *__begin_; 
        struct shared_ptr<vk::NavLabel> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<vk::NavLabel> *, vk_allocator<std::__1::shared_ptr<vk::NavLabel> > > { 
            struct shared_ptr<vk::NavLabel> {} *__first_; 
        } __end_cap_; 
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    } _activeSigns;
    BOOL _checkIfRouteSubrangeChanged;
    BOOL _checkOnRouteLabelsAlignment;
    unsigned int _countVisibleOnRouteRoadSigns;
    unsigned int _countVisibleRoadSigns;
    NSString *_currentLocationText;
    NSString *_currentRoadName;
    int _currentRoadNameIndex;
    NSString *_currentShieldGroup;
    BOOL _disableTileParseForOneLayout;
    BOOL _drawRoadSigns;
    NSMutableArray *_fadingLabels;
    NSMutableArray *_guidanceStepInfos;
    BOOL _isOnRoute;
    NSMutableArray *_junctions;
    unsigned int _maxOnRoadGraphRoadSigns;
    unsigned int _maxVisibleRoadSigns;
    float _minSignOffsetDistance;
    unsigned int _minVisibleOnRouteRoadSigns;
    unsigned int _minVisibleProceedToRouteRoadSigns;
    unsigned int _minVisibleRoadSigns;
    BOOL _needsLayout;
    NSMutableSet *_pendingTiles;
    BOOL _preferRightSideLabelPlacement;
    VKLabelNavRoadGraph *_roadGraph;
    NSMutableSet *_roadNamesInGuidance;
    VKPolylineOverlayPainter *_route;
    NSMutableArray *_routeRoadInfos;
    } _routeSubrangeEnd;
    } _routeSubrangeStart;
    } _routeUserOffset;
    unsigned int _stepIndex;
    NSMutableSet *_tiles;
    BOOL _useRouteSubrange;
    NSMutableArray *_visibleLabels;
    NSMutableDictionary *_visibleLabelsByName;
}

@property(readonly) const /* Warning: unhandled struct encoding: '{vector<std::__1::shared_ptr<vk::NavLabel>' */ struct * activeSigns; /* unknown property attribute:  vk_allocator<std::__1::shared_ptr<vk::NavLabel> > >=^{shared_ptr<vk::NavLabel>}}} */
@property(retain) NSString * currentLocationText;
@property(retain) NSString * currentRoadName;
@property(retain) NSString * currentShieldGroup;
@property BOOL drawRoadSigns;
@property(readonly) BOOL needsLayout;
@property(retain) VKPolylineOverlayPainter * route;
@property struct PolylineCoordinate { unsigned int x1; float x2; } routeUserOffset;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_addJunctionsForTile:(id)arg1;
- (void)_addLabelsAtJunctions:(id)arg1 withContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; }*)arg2 maxVisibleLabels:(unsigned int)arg3 minOnRouteVisibleLabels:(unsigned int)arg4;
- (void)_addLabelsForJunctions:(id)arg1 withContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; }*)arg2 maxVisibleLabels:(unsigned int)arg3 minOnRouteVisibleLabels:(unsigned int)arg4 useAllJunctions:(BOOL)arg5 placeShieldsFrontToBack:(BOOL)arg6;
- (BOOL)_collideLabel:(id)arg1 activeLabel:(id)arg2 labelsToRemove:(id)arg3;
- (void)_createOrUpdateLabelForRoad:(id)arg1 isShield:(BOOL)arg2 navContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; }*)arg3;
- (BOOL)_findRouteOverlappingJunctionFrom:(int)arg1 routeJunctions:(struct vector<RouteJunctionInfo, vk_allocator<RouteJunctionInfo> > { struct RouteJunctionInfo {} *x1; struct RouteJunctionInfo {} *x2; struct __compressed_pair<RouteJunctionInfo *, vk_allocator<RouteJunctionInfo> > { struct RouteJunctionInfo {} *x_3_1_1; } x3; }*)arg2 lookBackward:(BOOL)arg3 firstOverlap:(int*)arg4 secondOverlap:(int*)arg5;
- (void)_initalizeCurrentRoadInfo;
- (void)_refreshGuidanceRoadNames;
- (void)_reloadRouteJunctions;
- (void)_tryAddLabel:(id)arg1 navContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; }*)arg2 labelCollisionEnabled:(BOOL)arg3;
- (void)_tryAddRoadSignForJunction:(id)arg1 navContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; }*)arg2 labelCollisionEnabled:(BOOL)arg3;
- (void)_tryAddRoadSignForRoad:(id)arg1 isShield:(BOOL)arg2 navContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; }*)arg3 labelCollisionEnabled:(BOOL)arg4;
- (BOOL)_updateActiveRouteRange;
- (void)_updateCurrentRoadInfo;
- (void)_updatePreferredLabelPlacements;
- (void)_updateRoadStarts;
- (void)_updateRoadsInGuidance;
- (void)_updateUniqueOffRouteRoads;
- (const struct vector<std::__1::shared_ptr<vk::NavLabel>, vk_allocator<std::__1::shared_ptr<vk::NavLabel> > > { struct shared_ptr<vk::NavLabel> {} *x1; struct shared_ptr<vk::NavLabel> {} *x2; struct __compressed_pair<std::__1::shared_ptr<vk::NavLabel> *, vk_allocator<std::__1::shared_ptr<vk::NavLabel> > > { struct shared_ptr<vk::NavLabel> {} *x_3_1_1; } x3; }*)activeSigns;
- (void)clearSceneIsMemoryWarning:(BOOL)arg1;
- (unsigned char)computeRoutePositionMaskForPOIAtPixel:(const struct Vec2Imp<float> { float x1; float x2; }*)arg1 currentPositionMask:(unsigned char)arg2 context:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; }*)arg3;
- (id)currentLocationText;
- (id)currentRoadName;
- (id)currentShieldGroup;
- (void)dealloc;
- (BOOL)drawRoadSigns;
- (void)grabTilesFromScene:(id)arg1;
- (id)init;
- (BOOL)isNavMode;
- (void)layoutWithNavContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; }*)arg1;
- (BOOL)needsLayout;
- (id)route;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeUserOffset;
- (void)setCurrentLocationText:(id)arg1;
- (void)setCurrentRoadName:(id)arg1;
- (void)setCurrentShieldGroup:(id)arg1;
- (void)setDrawRoadSigns:(BOOL)arg1;
- (void)setRoute:(id)arg1;
- (void)setRouteUserOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (void)setStylesheet:(id)arg1;

@end
