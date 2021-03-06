//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKMapTileModel.h>

#import "VKMapLayer.h"

@class NSMutableArray, VGLMesh, VGLRenderState, VGLTexture, VKPolygonDrawStyle;

__attribute__((visibility("hidden")))
@interface VKGroundCoverMapModel : VKMapTileModel <VKMapLayer>
{
    NSMutableArray *_sortedTiles;
    VKPolygonDrawStyle *_landStyle;
    BOOL _usePlainFillColor;
    BOOL _hasVegetationSettings;
    float _alpha;
    float _brightness;
    BOOL _showVegetation;
    VGLRenderState *_renderState;
    VGLTexture *_landTexture;
    VGLTexture *_landTextureVariant;
    float _layoutMaxZ;
    float _layoutContentScale;
    BOOL _needsLandSettingsUpdate;
    VGLMesh *_groundMesh;
    int _groundMeshCapacity;
}

+ (BOOL)reloadOnActiveTileGroupChange;
+ (BOOL)reloadOnStylesheetChange;
- (void)stylesheetDidChange;
- (void)stylesheetWillChange;
- (void)activeTileGroupChanged;
- (void)setActive:(BOOL)arg1;
- (id)groundMeshForTiles:(id)arg1 relativeToTile:(id)arg2;
- (void)drawScene:(id)arg1 withContext:(id)arg2;
- (void)layoutScene:(id)arg1 withContext:(id)arg2;
- (void)updateVegetationSettingsFromStylesheet;
@property(readonly, nonatomic) BOOL shouldEverShowVegetation;
- (void)reset;
- (unsigned int)supportedRenderPasses;
- (unsigned int)mapLayerPosition;
- (void)loadLandSettingsForLevelOfDetail:(unsigned int)arg1 scale:(float)arg2;
- (void)dealloc;
- (id)init;

@end

