/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VGLTexturePool;

@interface VGLPooledTexture : VGLTexture {
    VGLTexturePool *_pool;
}

- (void)dealloc;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 resource:(id)arg2 pool:(id)arg3;
- (BOOL)loadTexture;

@end