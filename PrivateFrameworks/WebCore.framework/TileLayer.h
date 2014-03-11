/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface TileLayer : CALayer {
    unsigned int _paintCount;
    struct TileGrid { struct TileCache {} *x1; struct RetainPtr<CALayer> { struct CALayer { Class x_1_2_1; struct _CALayerIvars { int x_2_3_1; unsigned int x_2_3_2; void *x_2_3_3; void *x_2_3_4[8]; } x_1_2_2; } *x_2_1_1; } x2; struct IntPoint { int x_3_1_1; int x_3_1_2; } x3; struct IntSize { int x_4_1_1; int x_4_1_2; } x4; float x5; struct HashMap<WebCore::IntPoint, WTF::RefPtr<WebCore::TileGridTile>, WTF::IntPointHash, WTF::HashTraits<WebCore::IntPoint>, WTF::HashTraits<WTF::RefPtr<WebCore::TileGridTile> > > { struct HashTable<WebCore::IntPoint, WTF::KeyValuePair<WebCore::IntPoint, WTF::RefPtr<WebCore::TileGridTile> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::IntPoint, WTF::RefPtr<WebCore::TileGridTile> > >, WTF::IntPointHash, WTF::HashMapValueTraits<WTF::HashTraits<WebCore::IntPoint>, WTF::HashTraits<WTF::RefPtr<WebCore::TileGridTile> > >, WTF::HashTraits<WebCore::IntPoint> > { struct KeyValuePair<WebCore::IntPoint, WTF::RefPtr<WebCore::TileGridTile> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_6_1_1; } x6; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_7_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_7_1_2; } x7; } *_tileGrid;
}

@property struct TileGrid { struct TileCache {} *x1; struct RetainPtr<CALayer> { struct CALayer { Class x_1_2_1; struct _CALayerIvars { int x_2_3_1; unsigned int x_2_3_2; void *x_2_3_3; void *x_2_3_4[8]; } x_1_2_2; } *x_2_1_1; } x2; struct IntPoint { int x_3_1_1; int x_3_1_2; } x3; struct IntSize { int x_4_1_1; int x_4_1_2; } x4; float x5; /* Warning: unhandled struct encoding: '{HashMap<WebCore::IntPoint' */ struct x6; void*x7; void*x8; int x9; void*x10; in void*x11; void*x12; void*x13; void*x14; void*x15; struct x16; void*x17; }* tileGrid; /* unknown property attribute:  WTF::RefPtr<WebCore::TileGridTile> >}iiii}}{IntRect={IntPoint=ii}{IntSize=ii}}} */
@property unsigned int paintCount;

+ (id)layerBeingPainted;

- (id)actionForKey:(id)arg1;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)layoutSublayers;
- (unsigned int)paintCount;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setPaintCount:(unsigned int)arg1;
- (void)setTileGrid:(struct TileGrid { struct TileCache {} *x1; struct RetainPtr<CALayer> { struct CALayer { Class x_1_2_1; struct _CALayerIvars { int x_2_3_1; unsigned int x_2_3_2; void *x_2_3_3; void *x_2_3_4[8]; } x_1_2_2; } *x_2_1_1; } x2; struct IntPoint { int x_3_1_1; int x_3_1_2; } x3; struct IntSize { int x_4_1_1; int x_4_1_2; } x4; float x5; struct HashMap<WebCore::IntPoint, WTF::RefPtr<WebCore::TileGridTile>, WTF::IntPointHash, WTF::HashTraits<WebCore::IntPoint>, WTF::HashTraits<WTF::RefPtr<WebCore::TileGridTile> > > { struct HashTable<WebCore::IntPoint, WTF::KeyValuePair<WebCore::IntPoint, WTF::RefPtr<WebCore::TileGridTile> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::IntPoint, WTF::RefPtr<WebCore::TileGridTile> > >, WTF::IntPointHash, WTF::HashMapValueTraits<WTF::HashTraits<WebCore::IntPoint>, WTF::HashTraits<WTF::RefPtr<WebCore::TileGridTile> > >, WTF::HashTraits<WebCore::IntPoint> > { struct KeyValuePair<WebCore::IntPoint, WTF::RefPtr<WebCore::TileGridTile> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_6_1_1; } x6; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_7_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_7_1_2; } x7; }*)arg1;
- (struct TileGrid { struct TileCache {} *x1; struct RetainPtr<CALayer> { struct CALayer { Class x_1_2_1; struct _CALayerIvars { int x_2_3_1; unsigned int x_2_3_2; void *x_2_3_3; void *x_2_3_4[8]; } x_1_2_2; } *x_2_1_1; } x2; struct IntPoint { int x_3_1_1; int x_3_1_2; } x3; struct IntSize { int x_4_1_1; int x_4_1_2; } x4; float x5; struct HashMap<WebCore::IntPoint, WTF::RefPtr<WebCore::TileGridTile>, WTF::IntPointHash, WTF::HashTraits<WebCore::IntPoint>, WTF::HashTraits<WTF::RefPtr<WebCore::TileGridTile> > > { struct HashTable<WebCore::IntPoint, WTF::KeyValuePair<WebCore::IntPoint, WTF::RefPtr<WebCore::TileGridTile> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::IntPoint, WTF::RefPtr<WebCore::TileGridTile> > >, WTF::IntPointHash, WTF::HashMapValueTraits<WTF::HashTraits<WebCore::IntPoint>, WTF::HashTraits<WTF::RefPtr<WebCore::TileGridTile> > >, WTF::HashTraits<WebCore::IntPoint> > { struct KeyValuePair<WebCore::IntPoint, WTF::RefPtr<WebCore::TileGridTile> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_6_1_1; } x6; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_7_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_7_1_2; } x7; }*)tileGrid;

@end
