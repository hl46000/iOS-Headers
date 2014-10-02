//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface TSDGLFrameBuffer : NSObject
{
    NSArray *_textureConfigs;
    NSDictionary *_namesToTextureDict;
    unsigned int *_textures[16];
    unsigned int _textureCount[16];
    unsigned int _currentTextureIndex[16];
    unsigned int _desiredTextureIndex[16];
    unsigned int _framebuffer;
    BOOL _isUsingNonDefaultAttachments;
    BOOL _isBound;
    BOOL _shouldDeleteTexturesOnTeardown;
    NSString *_name;
    struct CGSize _size;
}

+ (void)setCurrentGLFramebuffer:(int)arg1;
+ (int)currentGLFramebuffer;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) BOOL shouldDeleteTexturesOnTeardown; // @synthesize shouldDeleteTexturesOnTeardown=_shouldDeleteTexturesOnTeardown;
@property(readonly, nonatomic) BOOL isBound; // @synthesize isBound=_isBound;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
- (unsigned int)currentGLTexture;
- (unsigned int)currentGLTextureAtAttachment:(unsigned int)arg1;
- (void)teardown;
- (unsigned int)GLTextureNamed:(id)arg1;
- (unsigned int)GLTextureAtIndex:(unsigned int)arg1;
- (unsigned int)GLTextureAtIndex:(unsigned int)arg1 attachment:(unsigned int)arg2;
- (void)setCurrentTextureToNext;
- (void)setCurrentTextureToNextAtAttachment:(unsigned int)arg1;
- (void)setCurrentTextureNamed:(id)arg1;
- (void)setCurrentTextureIndex:(unsigned int)arg1;
- (void)setCurrentTextureIndex:(unsigned int)arg1 atAttachment:(unsigned int)arg2;
- (void)unbindFramebufferAndBindGLFramebuffer:(int)arg1;
- (void)bindFramebuffer;
- (void)setupFramebufferIfNecessary;
- (id)description;
- (void)dealloc;
- (id)initWithSize:(struct CGSize)arg1;
- (id)initWithSize:(struct CGSize)arg1 textureCount:(unsigned int)arg2;
- (id)initWithSize:(struct CGSize)arg1 textureConfigs:(id)arg2;

@end
