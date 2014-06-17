/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class TSCH3DShaderVariable, NSMutableSet;

@interface TSCH3DShaderVariableLinkage : NSObject  {
    TSCH3DShaderVariable *mVariable;
    struct TSCH3DShaderType { 
        unsigned int mValue; 
    } mLinked;
    struct TSCH3DShaderVariableScopes { 
        struct array<TSCH3DShaderVariableScopeType, 2> { 
            struct TSCH3DShaderVariableScopeType { 
                unsigned int mValue; 
            } __elems_[2]; 
        } mScopes; 
    } mScope;
    struct TSCH3DShaderVariableScopes { 
        struct array<TSCH3DShaderVariableScopeType, 2> { 
            struct TSCH3DShaderVariableScopeType { 
                unsigned int mValue; 
            } __elems_[2]; 
        } mScopes; 
    } mDeclaredScope;
    BOOL mIsUsed;
    NSMutableSet *mDependees;
}

@property(readonly) TSCH3DShaderVariable * variable;
@property(readonly) NSMutableSet * dependees;
@property(readonly) struct TSCH3DShaderType { unsigned int x1; } shaderType;
@property(readonly) struct TSCH3DShaderType { unsigned int x1; } linked;
@property(readonly) /* Warning: unhandled struct encoding: '{TSCH3DShaderVariableScopes={array<TSCH3DShaderVariableScopeType' */ struct  scope; /* unknown property attribute:  2>=[2{TSCH3DShaderVariableScopeType=I}]}} */
@property(readonly) BOOL isLinked;
@property(readonly) BOOL notLinked;
@property(readonly) struct  declaredScope; /* unknown property attribute:  2>=[2{TSCH3DShaderVariableScopeType=I}]}} */
@property BOOL isUsed;
@property(readonly) BOOL isSpecial;
@property(readonly) BOOL isUniform;
@property(readonly) BOOL hasAttribute;
@property(readonly) BOOL isAttribute;
@property(readonly) BOOL isVertexVarying;
@property(readonly) BOOL isFragment;
@property(readonly) BOOL hasFragment;
@property(readonly) BOOL canHaveFragment;
@property(readonly) BOOL isVertex;
@property(readonly) BOOL hasVertex;
@property(readonly) BOOL scopeHasFragment;
@property(readonly) BOOL scopedInAll;
@property(readonly) BOOL isFragmentLinkable;
@property(readonly) BOOL isVertexLinkable;
@property(readonly) unsigned int hasGlobal;

+ (id)linkageWithVariable:(id)arg1;

- (struct TSCH3DShaderVariableScopes { struct array<TSCH3DShaderVariableScopeType, 2> { struct TSCH3DShaderVariableScopeType { unsigned int x_1_2_1; } x_1_1_1[2]; } x1; })scope;
- (void)unlink;
- (BOOL)isSpecial;
- (BOOL)isLinked;
- (id)variable;
- (id).cxx_construct;
- (id)description;
- (void)dealloc;
- (BOOL)isAttribute;
- (BOOL)hasLinkage:(struct TSCH3DShaderType { unsigned int x1; })arg1;
- (void)removeLinkage:(struct TSCH3DShaderType { unsigned int x1; })arg1;
- (void)removeShader:(struct TSCH3DShaderType { unsigned int x1; })arg1 scope:(struct TSCH3DShaderVariableScopeType { unsigned int x1; })arg2;
- (BOOL)updateShader:(struct TSCH3DShaderType { unsigned int x1; })arg1 scope:(struct TSCH3DShaderVariableScopeType { unsigned int x1; })arg2;
- (BOOL)hasVarying;
- (id)resolveGlobalNameForShader:(struct TSCH3DShaderType { unsigned int x1; })arg1 scope:(struct TSCH3DShaderVariableScopeType { unsigned int x1; })arg2 defaultTo:(id)arg3;
- (BOOL)hasShader:(struct TSCH3DShaderType { unsigned int x1; })arg1 scope:(struct TSCH3DShaderVariableScopeType { unsigned int x1; })arg2;
- (unsigned int)hasGlobal;
- (BOOL)isGlobalScope:(struct TSCH3DShaderVariableScopeType { unsigned int x1; })arg1;
- (BOOL)isFragment;
- (BOOL)isVertex;
- (BOOL)scopeHasFragment;
- (BOOL)isVertexVarying;
- (id)initWithVariable:(id)arg1;
- (BOOL)isUsed;
- (id)variableQualifiersWithStorageQualifier:(id)arg1;
- (id)globalNameForShader:(struct TSCH3DShaderType { unsigned int x1; })arg1 scope:(struct TSCH3DShaderVariableScopeType { unsigned int x1; })arg2;
- (void)setLinkage:(struct TSCH3DShaderType { unsigned int x1; })arg1;
- (void)setShader:(struct TSCH3DShaderType { unsigned int x1; })arg1 scope:(struct TSCH3DShaderVariableScopeType { unsigned int x1; })arg2;
- (id)dependees;
- (id)variableDeclarationInShader:(struct TSCH3DShaderType { unsigned int x1; })arg1 scope:(struct TSCH3DShaderVariableScopeType { unsigned int x1; })arg2;
- (id)nameForShader:(struct TSCH3DShaderType { unsigned int x1; })arg1 scope:(struct TSCH3DShaderVariableScopeType { unsigned int x1; })arg2;
- (void)addBodyScope:(struct TSCH3DShaderType { unsigned int x1; })arg1;
- (BOOL)updateLinkage:(struct TSCH3DShaderType { unsigned int x1; })arg1;
- (struct TSCH3DShaderType { unsigned int x1; })linked;
- (BOOL)isVertexLinkable;
- (BOOL)isFragmentLinkable;
- (BOOL)scopedInAll;
- (BOOL)hasAttribute;
- (BOOL)hasVertex;
- (BOOL)isVarying:(struct TSCH3DShaderType { unsigned int x1; })arg1;
- (BOOL)canHaveFragment;
- (BOOL)hasFragment;
- (BOOL)isUniform;
- (BOOL)notLinked;
- (void)setIsUsed:(BOOL)arg1;
- (void)addDeclaredShader:(struct TSCH3DShaderType { unsigned int x1; })arg1 scope:(struct TSCH3DShaderVariableScopeType { unsigned int x1; })arg2;
- (void)addLinkage:(struct TSCH3DShaderType { unsigned int x1; })arg1;
- (void)addShader:(struct TSCH3DShaderType { unsigned int x1; })arg1 scope:(struct TSCH3DShaderVariableScopeType { unsigned int x1; })arg2;
- (BOOL)hasBody:(struct TSCH3DShaderType { unsigned int x1; })arg1;
- (struct TSCH3DShaderVariableScopes { struct array<TSCH3DShaderVariableScopeType, 2> { struct TSCH3DShaderVariableScopeType { unsigned int x_1_2_1; } x_1_1_1[2]; } x1; })declaredScope;
- (struct TSCH3DShaderType { unsigned int x1; })shaderType;

@end