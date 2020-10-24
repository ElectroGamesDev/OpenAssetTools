#pragma once

#ifndef __T6_ASSETS_H
#define __T6_ASSETS_H

#ifndef __zonecodegenerator
namespace T6
{
#endif

    typedef __declspec(align(16)) char char16;
    typedef __declspec(align(32)) char byte32;
    typedef __declspec(align(128)) char byte128;

    typedef __declspec(align(4)) char char_align4;
    typedef __declspec(align(128)) char char_align128;

    typedef __declspec(align(16)) char raw_byte16;
    typedef __declspec(align(128)) char raw_byte128;

    typedef __declspec(align(128)) float float_align128;

    struct dvar_t;
    struct MenuCell;
    struct cplane_s;
    struct cbrushside_t;
    struct MaterialVertexDeclaration;
    struct MaterialVertexShader;
    struct MaterialPixelShader;
    struct MaterialShaderArgument;
    struct MaterialTechnique;
    struct MaterialTechniqueSet;
    struct GfxImageLoadDef;
    struct GfxImage;
    struct MaterialTextureDef;
    struct MaterialConstantDef;
    struct GfxStateBits;
    struct Material;
    struct MenuRow;
    struct Glyph;
    struct KerningPairs;
    struct Font_s;
    struct BrushWrapper;
    struct multiDef_s;
    struct XModelCollTri_s;
    struct PhysConstraints;
    struct ScriptCondition;
    struct listBoxDef_s;
    struct expressionRpn;
    struct GenericEventScript;
    struct GenericEventHandler;
    struct animParamsDef_t;
    struct enumDvarDef_s;
    struct PhysPreset;
    struct profileMultiDef_s;
    struct PhysGeomInfo;
    struct XModelCollSurf_s;
    struct gameMsgDef_s;
    struct SndAlias;
    struct SndAliasList;
    struct XBoneInfo;
    struct editFieldDef_s;
    struct WeaponCamoMaterial;
    struct PhysGeomList;
    struct textExp_s;
    struct ItemKeyHandler;
    struct focusItemDef_s;
    struct textDef_s;
    struct imageDef_s;
    struct ownerDrawDef_s;
    struct menuDef_t;
    struct rectData_s;
    struct UIAnimInfo;
    struct itemDef_s;
    struct WeaponCamoMaterialSet;
    struct Collmap;
    struct TracerDef;
    struct WeaponAttachment;
    struct DObjAnimMat;
    struct GfxPackedVertex;
    struct XSurfaceCollisionNode;
    struct XSurfaceCollisionLeaf;
    struct XSurfaceCollisionTree;
    struct XRigidVertList;
    struct XSurface;
    struct XModel;
    struct flameTable;
    struct cStaticModel_s;
    struct FxElemVelStateSample;
    struct FxElemVisStateSample;
    struct FxElemMarkVisuals;
    struct FxEffectDef;
    struct GfxLightDef;
    union FxElemVisuals;
    struct FxTrailVertex;
    struct FxTrailDef;
    struct FxSpotLightDef;
    struct FxElemDef;
    struct WeaponCamoSet;
    struct WeaponCamo;
    struct WeaponDef;
    struct WeaponAttachmentUnique;
    struct WeaponVariantDef;
    struct cLeafBrushNode_s;
    struct cbrush_t;
    struct ClipMaterial;
    struct Bounds;
    struct cLeaf_s;
    struct cmodel_t;
    struct CollisionAabbTree;
    struct pathlink_s;
    struct pathnode_t;
    struct DestructiblePiece;
    struct DestructibleDef;
    struct GraphFloat;
    struct VehicleDef;
    struct XAnimNotifyInfo;
    struct XAnimPartTrans;
    struct XAnimDeltaPartQuat2;
    struct XAnimDeltaPartQuat;
    struct XAnimDeltaPart;
    struct XAnimParts;
    struct ZBarrierDef;
    struct GfxLight;
    struct ddlHash_t;
    struct ddlEnumDef_t;
    struct SndVolumeGroup;
    struct XModelPiece;
    struct XModelPieces;
    struct DynEntityDef;
    struct CollisionPartition;
    struct ddlMemberDef_t;
    struct ddlStructDef_t;
    struct ddlDef_t;
    struct GlassDef;
    struct Glass;
    struct GfxAabbTree;
    struct FxImpactEntry;
    struct StringTableCell;
    struct ddlRoot_t;
    struct StringTable;
    struct FxImpactTable;
    struct SndIndexEntry;
    struct SndRadverb;
    struct SndDuck;
    struct SndAssetBankEntry;
    struct SndDialogScriptIdLookup;
    struct SndBank;
    struct SndPatch;
    struct cNode_t;
    struct TriggerModel;
    struct TriggerHull;
    struct TriggerSlab;
    struct MapEnts;
    struct DynEntityPose;
    struct DynEntityClient;
    struct DynEntityServer;
    struct DynEntityColl;
    struct rope_t;
    struct clipMap_t;
    struct ComPrimaryLight;
    struct ComWorld;
    struct pathbasenode_t;
    struct pathnode_tree_t;
    struct GameWorldSp;
    struct GameWorldMp;
    struct GfxStreamingAabbTree;
    struct GfxLightCorona;
    struct GfxShadowMapVolume;
    struct GfxVolumePlane;
    struct GfxExposureVolume;
    struct GfxWorldFogVolume;
    struct GfxWorldFogModifierVolume;
    struct GfxLutVolume;
    struct GfxPortal;
    struct GfxCell;
    struct GfxReflectionProbeVolumeData;
    struct GfxReflectionProbe;
    struct GfxLightmapArray;
    struct GfxLightGridEntry;
    struct GfxCompressedLightGridColors;
    struct GfxCompressedLightGridCoeffs;
    struct GfxSkyGridVolume;
    struct GfxBrushModel;
    struct MaterialMemory;
    struct GfxSceneDynModel;
    struct GfxSceneDynBrush;
    struct SSkinShaders;
    struct SSkinVert;
    struct SSkinModel;
    struct SSkinAnim;
    struct SSkinInstance;
    struct GfxShadowGeometry;
    struct GfxLightRegionAxis;
    struct GfxLightRegionHull;
    struct GfxLightRegion;
    struct GfxStaticModelInst;
    struct GfxSurface;
    struct GfxStaticModelDrawInst;
    struct Occluder;
    struct GfxOutdoorBounds;
    struct GfxHeroLight;
    struct GfxHeroLightTree;
    struct GfxWorld;
    struct FontIconEntry;
    struct FontIconAlias;
    struct FontIcon;
    struct MenuList;
    struct LocalizeEntry;
    struct SndCurve;
    struct SndPan;
    struct SndDuckGroup;
    struct SndContext;
    struct SndMaster;
    struct SndSidechainDuck;
    struct SndFutz;
    struct SndDriverGlobals;
    struct RawFile;
    struct LbColumnDef;
    struct LeaderboardDef;
    struct XGlobals;
    struct Glasses;
    struct EmblemSet;
    struct ScriptParseTree;
    struct KeyValuePair;
    struct KeyValuePairs;
    struct MemoryBlock;
    struct AddonMapEnts;
    struct SkinnedVertsDef;
    struct Qdb;
    struct Slug;
    struct FootstepTableDef;
    struct FootstepFXTableDef;

    enum XAssetType
    {
        ASSET_TYPE_XMODELPIECES = 0x0,
        ASSET_TYPE_PHYSPRESET = 0x1,
        ASSET_TYPE_PHYSCONSTRAINTS = 0x2,
        ASSET_TYPE_DESTRUCTIBLEDEF = 0x3,
        ASSET_TYPE_XANIMPARTS = 0x4,
        ASSET_TYPE_XMODEL = 0x5,
        ASSET_TYPE_MATERIAL = 0x6,
        ASSET_TYPE_TECHNIQUE_SET = 0x7,
        ASSET_TYPE_IMAGE = 0x8,
        ASSET_TYPE_SOUND = 0x9,
        ASSET_TYPE_SOUND_PATCH = 0xA,
        ASSET_TYPE_CLIPMAP = 0xB,
        ASSET_TYPE_CLIPMAP_PVS = 0xC,
        ASSET_TYPE_COMWORLD = 0xD,
        ASSET_TYPE_GAMEWORLD_SP = 0xE,
        ASSET_TYPE_GAMEWORLD_MP = 0xF,
        ASSET_TYPE_MAP_ENTS = 0x10,
        ASSET_TYPE_GFXWORLD = 0x11,
        ASSET_TYPE_LIGHT_DEF = 0x12,
        ASSET_TYPE_UI_MAP = 0x13,
        ASSET_TYPE_FONT = 0x14,
        ASSET_TYPE_FONTICON = 0x15,
        ASSET_TYPE_MENULIST = 0x16,
        ASSET_TYPE_MENU = 0x17,
        ASSET_TYPE_LOCALIZE_ENTRY = 0x18,
        ASSET_TYPE_WEAPON = 0x19,
        ASSET_TYPE_WEAPONDEF = 0x1A,
        ASSET_TYPE_WEAPON_VARIANT = 0x1B,
        ASSET_TYPE_WEAPON_FULL = 0x1C,
        ASSET_TYPE_ATTACHMENT = 0x1D,
        ASSET_TYPE_ATTACHMENT_UNIQUE = 0x1E,
        ASSET_TYPE_WEAPON_CAMO = 0x1F,
        ASSET_TYPE_SNDDRIVER_GLOBALS = 0x20,
        ASSET_TYPE_FX = 0x21,
        ASSET_TYPE_IMPACT_FX = 0x22,
        ASSET_TYPE_AITYPE = 0x23,
        ASSET_TYPE_MPTYPE = 0x24,
        ASSET_TYPE_MPBODY = 0x25,
        ASSET_TYPE_MPHEAD = 0x26,
        ASSET_TYPE_CHARACTER = 0x27,
        ASSET_TYPE_XMODELALIAS = 0x28,
        ASSET_TYPE_RAWFILE = 0x29,
        ASSET_TYPE_STRINGTABLE = 0x2A,
        ASSET_TYPE_LEADERBOARD = 0x2B,
        ASSET_TYPE_XGLOBALS = 0x2C,
        ASSET_TYPE_DDL = 0x2D,
        ASSET_TYPE_GLASSES = 0x2E,
        ASSET_TYPE_EMBLEMSET = 0x2F,
        ASSET_TYPE_SCRIPTPARSETREE = 0x30,
        ASSET_TYPE_KEYVALUEPAIRS = 0x31,
        ASSET_TYPE_VEHICLEDEF = 0x32,
        ASSET_TYPE_MEMORYBLOCK = 0x33,
        ASSET_TYPE_ADDON_MAP_ENTS = 0x34,
        ASSET_TYPE_TRACER = 0x35,
        ASSET_TYPE_SKINNEDVERTS = 0x36,
        ASSET_TYPE_QDB = 0x37,
        ASSET_TYPE_SLUG = 0x38,
        ASSET_TYPE_FOOTSTEP_TABLE = 0x39,
        ASSET_TYPE_FOOTSTEPFX_TABLE = 0x3A,
        ASSET_TYPE_ZBARRIER = 0x3B,
        ASSET_TYPE_COUNT = 0x3C,
        ASSET_TYPE_STRING = 0x3C,
        ASSET_TYPE_ASSETLIST = 0x3D,
        ASSET_TYPE_REPORT = 0x3E,
        ASSET_TYPE_DEPEND = 0x3F,
        ASSET_TYPE_FULL_COUNT = 0x40,
    };

    enum XFileBlock
    {
        XFILE_BLOCK_TEMP,
        XFILE_BLOCK_RUNTIME_VIRTUAL,
        XFILE_BLOCK_RUNTIME_PHYSICAL,
        XFILE_BLOCK_DELAY_VIRTUAL,
        XFILE_BLOCK_DELAY_PHYSICAL,
        XFILE_BLOCK_VIRTUAL,
        XFILE_BLOCK_PHYSICAL,
        XFILE_BLOCK_STREAMER_RESERVE,
        MAX_XFILE_COUNT,
    };


    union XAssetHeader
    {
        //XModelPieces *xmodelPieces; // Not an asset
        PhysPreset* physPreset;
        PhysConstraints* physConstraints;
        DestructibleDef* destructibleDef;
        XAnimParts* parts;
        XModel* model;
        Material* material;
        //MaterialPixelShader *pixelShader; // Not an asset
        //MaterialVertexShader *vertexShader; // Not an asset
        MaterialTechniqueSet* techniqueSet;
        GfxImage* image;
        SndBank* sound;
        SndPatch* soundPatch;
        clipMap_t* clipMap;
        ComWorld* comWorld;
        GameWorldSp* gameWorldSp;
        GameWorldMp* gameWorldMp;
        MapEnts* mapEnts;
        GfxWorld* gfxWorld;
        GfxLightDef* lightDef;
        Font_s* font;
        FontIcon* fontIcon;
        MenuList* menuList;
        menuDef_t* menu;
        LocalizeEntry* localize;
        WeaponVariantDef* weapon;
        WeaponAttachment* attachment;
        WeaponAttachmentUnique* attachmentUnique;
        WeaponCamo* weaponCamo;
        SndDriverGlobals* sndDriverGlobals;
        FxEffectDef* fx;
        FxImpactTable* impactFx;
        RawFile* rawfile;
        StringTable* stringTable;
        LeaderboardDef* leaderboardDef;
        XGlobals* xGlobals;
        ddlRoot_t* ddlRoot;
        Glasses* glasses;
        //TextureList *textureList; // Does not exist in this game
        EmblemSet* emblemSet;
        ScriptParseTree* scriptParseTree;
        KeyValuePairs* keyValuePairs;
        VehicleDef* vehicleDef;
        MemoryBlock* memoryBlock;
        AddonMapEnts* addonMapEnts;
        TracerDef* tracerDef;
        SkinnedVertsDef* skinnedVertsDef;
        Qdb* qdb;
        Slug* slug;
        FootstepTableDef* footstepTableDef;
        FootstepFXTableDef* footstepFXTableDef;
        ZBarrierDef* zbarrierDef;
        void* data;
    };


    struct XModelPieces
    {
        const char* name;
        int numpieces;
        XModelPiece* pieces;
    };


    union vec3_t
    {
        struct
        {
            float x;
            float y;
            float z;
        };

        float v[3];
    };

    struct PhysPresetInfo
    {
        float mass;
        float bounce;
        float friction;
        int isFrictionInfinity;
        float bulletForceScale;
        float explosiveForceScale;
        float piecesSpreadFraction;
        float piecesUpwardVelocity;
        int canFloat;
        float gravityScale;
        vec3_t centerOfMassOffset;
        vec3_t buoyancyBoxMin;
        vec3_t buoyancyBoxMax;
    };

    struct PhysPreset
    {
        const char* name;
        int flags;
        float mass;
        float bounce;
        float friction;
        float bulletForceScale;
        float explosiveForceScale;
        const char* sndAliasPrefix;
        float piecesSpreadFraction;
        float piecesUpwardVelocity;
        int canFloat;
        float gravityScale;
        vec3_t centerOfMassOffset;
        vec3_t buoyancyBoxMin;
        vec3_t buoyancyBoxMax;
    };


    enum ConstraintType
    {
        CONSTRAINT_NONE = 0x0,
        CONSTRAINT_POINT = 0x1,
        CONSTRAINT_DISTANCE = 0x2,
        CONSTRAINT_HINGE = 0x3,
        CONSTRAINT_JOINT = 0x4,
        CONSTRAINT_ACTUATOR = 0x5,
        CONSTRAINT_FAKE_SHAKE = 0x6,
        CONSTRAINT_LAUNCH = 0x7,
        CONSTRAINT_ROPE = 0x8,
        CONSTRAINT_LIGHT = 0x9,
        NUM_CONSTRAINT_TYPES = 0xA,
    };


    enum AttachPointType
    {
        ATTACH_POINT_WORLD = 0x0,
        ATTACH_POINT_DYNENT = 0x1,
        ATTACH_POINT_ENT = 0x2,
        ATTACH_POINT_BONE = 0x3,
    };


    struct PhysConstraint
    {
        unsigned __int16 targetname;
        ConstraintType type;
        AttachPointType attach_point_type1;
        int target_index1;
        unsigned __int16 target_ent1;
        const char* target_bone1;
        AttachPointType attach_point_type2;
        int target_index2;
        unsigned __int16 target_ent2;
        const char* target_bone2;
        vec3_t offset;
        vec3_t pos;
        vec3_t pos2;
        vec3_t dir;
        int flags;
        int timeout;
        int min_health;
        int max_health;
        float distance;
        float damp;
        float power;
        vec3_t scale;
        float spin_scale;
        float minAngle;
        float maxAngle;
        Material* material;
        int constraintHandle;
        int rope_index;
        int centity_num[4];
    };


    struct PhysConstraints
    {
        const char* name;
        unsigned int count;
        PhysConstraint data[16];
    };


    struct DestructibleDef
    {
        const char* name;
        XModel* model;
        XModel* pristineModel;
        int numPieces;
        DestructiblePiece* pieces;
        int clientOnly;
    };


    union XAnimIndices
    {
        char* _1;
        unsigned __int16* _2;
        void* data;
    };


    struct XAnimParts
    {
        const char* name;
        unsigned __int16 dataByteCount;
        unsigned __int16 dataShortCount;
        unsigned __int16 dataIntCount;
        unsigned __int16 randomDataByteCount;
        unsigned __int16 randomDataIntCount;
        unsigned __int16 numframes;
        bool bLoop;
        bool bDelta;
        bool bDelta3D;
        bool bLeftHandGripIK;
        unsigned int streamedFileSize;
        unsigned char boneCount[10];
        unsigned char notifyCount;
        char assetType;
        bool isDefault;
        unsigned int randomDataShortCount;
        unsigned int indexCount;
        float framerate;
        float frequency;
        float primedLength;
        float loopEntryTime;
        unsigned __int16* names;
        char* dataByte;
        __int16* dataShort;
        int* dataInt;
        __int16* randomDataShort;
        char* randomDataByte;
        int* randomDataInt;
        XAnimIndices indices;
        XAnimNotifyInfo* notify;
        XAnimDeltaPart* deltaPart;
    };


    struct XModelLodInfo
    {
        float dist;
        unsigned __int16 numsurfs;
        unsigned __int16 surfIndex;
        int partBits[5];
    };


    struct XModel
    {
        const char* name;
        unsigned char numBones;
        unsigned char numRootBones;
        unsigned char numsurfs;
        char lodRampType;
        unsigned __int16* boneNames;
        char* parentList;
        __int16 (*quats)[4];
        float (*trans)[4];
        char* partClassification;
        DObjAnimMat* baseMat;
        XSurface* surfs;
        Material** materialHandles;
        XModelLodInfo lodInfo[4];
        XModelCollSurf_s* collSurfs;
        int numCollSurfs;
        int contents;
        XBoneInfo* boneInfo;
        float radius;
        vec3_t mins;
        vec3_t maxs;
        __int16 numLods;
        __int16 collLod;
        float* himipInvSqRadii;
        int memUsage;
        int flags;
        bool bad;
        PhysPreset* physPreset;
        char numCollmaps;
        Collmap* collmaps;
        PhysConstraints* physConstraints;
        vec3_t lightingOriginOffset;
        float lightingOriginRange;
    };


    struct GfxDrawSurfFields
    {
        unsigned __int64 objectId : 16;
        unsigned __int64 customIndex : 9;
        unsigned __int64 reflectionProbeIndex : 5;
        unsigned __int64 dlightMask : 2;
        unsigned __int64 materialSortedIndex : 12;
        unsigned __int64 primaryLightIndex : 8;
        unsigned __int64 surfType : 4;
        unsigned __int64 prepass : 2;
        unsigned __int64 primarySortKey : 6;
    };


    union GfxDrawSurf
    {
        GfxDrawSurfFields fields;
        unsigned __int64 packed;
    };


    struct __declspec(align(8)) MaterialInfo
    {
        const char* name;
        unsigned int gameFlags;
        char pad;
        char sortKey;
        char textureAtlasRowCount;
        char textureAtlasColumnCount;
        GfxDrawSurf drawSurf;
        unsigned int surfaceTypeBits;
        unsigned int layeredSurfaceTypes;
        unsigned __int16 hashIndex;
        int surfaceFlags;
        int contents;
    };

    typedef __declspec(align(8)) GfxStateBits GfxStateBitsTable;


    struct Material
    {
        MaterialInfo info;
        char stateBitsEntry[36];
        char textureCount;
        char constantCount;
        char stateBitsCount;
        char stateFlags;
        char cameraRegion;
        char probeMipBits;
        MaterialTechniqueSet* techniqueSet;
        MaterialTextureDef* textureTable;
        MaterialConstantDef* constantTable;
        GfxStateBitsTable* stateBitsTable;
        Material* thermalMaterial;
    };


    struct GfxPixelShaderLoadDef
    {
        char* program;
        unsigned int programSize;
    };


    struct MaterialPixelShaderProgram
    {
        ID3D11PixelShader* ps;
        GfxPixelShaderLoadDef loadDef;
    };


    struct MaterialPixelShader
    {
        const char* name;
        MaterialPixelShaderProgram prog;
    };


    struct GfxVertexShaderLoadDef
    {
        char* program;
        unsigned int programSize;
    };


    struct MaterialVertexShaderProgram
    {
        ID3D11VertexShader* vs;
        GfxVertexShaderLoadDef loadDef;
    };


    struct MaterialVertexShader
    {
        const char* name;
        MaterialVertexShaderProgram prog;
    };


    struct MaterialTechniqueSet
    {
        const char* name;
        char worldVertFormat;
        MaterialTechnique* techniques[36];
    };


    union GfxTexture
    {
        ID3D11ShaderResourceView* basemap;
        Texture* texture;
        GfxImageLoadDef* loadDef;
    };


    struct Picmip
    {
        char platform[2];
    };


    struct CardMemory
    {
        int platform[2];
    };


    struct GfxStreamedPartInfo
    {
        unsigned int levelCountAndSize;
        unsigned int hash;
        unsigned __int16 width;
        unsigned __int16 height;
        unsigned __int32 offset : 32;
        unsigned __int32 size : 28;
        unsigned __int32 ipakIndex : 4;
        unsigned __int32 adjacentLeft : 15;
        unsigned __int32 adjacentRight : 15;
        unsigned __int32 compressed : 1;
        unsigned __int32 valid : 1;
    };


    struct GfxImage
    {
        GfxTexture texture;
        char mapType;
        char semantic;
        char category;
        bool delayLoadPixels;
        Picmip picmip;
        bool noPicmip;
        char track;
        CardMemory cardMemory;
        unsigned __int16 width;
        unsigned __int16 height;
        unsigned __int16 depth;
        char levelCount;
        char streaming;
        unsigned int baseSize;
        char* pixels;
        GfxStreamedPartInfo streamedParts[1];
        char streamedPartCount;
        unsigned int loadedSize;
        char skippedMipLevels;
        const char* name;
        unsigned int hash;
    };


    struct SndAssetBankHeader
    {
        unsigned int magic;
        unsigned int version;
        unsigned int entrySize;
        unsigned int checksumSize;
        unsigned int dependencySize;
        unsigned int entryCount;
        unsigned int dependencyCount;
        unsigned int pad32;
        __int64 fileSize;
        __int64 entryOffset;
        __int64 checksumOffset;
        char checksumChecksum[16];
        char dependencies[512];
        char padding[1464];
    };

#pragma pack(push, 1)
    struct __declspec(align(2)) SndRuntimeAssetBank
    {
        const char* zone;
        const char* language;
        int fileHandle;
        SndAssetBankHeader header;
        unsigned int entryOffset;
        char linkTimeChecksum[16];
        char filename[256];
        bool indicesLoaded;
        bool indicesAllocated;
    };
#pragma pack(pop)

    typedef __declspec(align(2048)) char SndChar2048;


    struct SndLoadedAssets
    {
        const char* zone;
        const char* language;
        unsigned int loadedCount;
        unsigned int entryCount;
        SndAssetBankEntry* entries;
        unsigned int dataSize;
        SndChar2048* data;
    };


    enum SndBankState
    {
        SND_BANK_STATE_NEW = 0x0,
        SND_BANK_STATE_STREAM_HEADER = 0x1,
        SND_BANK_STATE_STREAM_TOC = 0x2,
        SND_BANK_STATE_LOADED_HEADER = 0x3,
        SND_BANK_STATE_LOADED_TOC = 0x4,
        SND_BANK_STATE_LOADED_ASSET_WAIT = 0x5,
        SND_BANK_STATE_LOADED_ASSETS = 0x6,
        SND_BANK_STATE_READY_TO_USE = 0x7,
        SND_BANK_STATE_ERROR = 0x8,
    };


    struct SndBank
    {
        const char* name;
        unsigned int aliasCount;
        SndAliasList* alias;
        SndIndexEntry* aliasIndex;
        unsigned int radverbCount;
        SndRadverb* radverbs;
        unsigned int duckCount;
        SndDuck* ducks;
        SndRuntimeAssetBank streamAssetBank;
        SndRuntimeAssetBank loadAssetBank;
        SndLoadedAssets loadedAssets;
        unsigned int scriptIdLookupCount;
        SndDialogScriptIdLookup* scriptIdLookups;
        SndBankState state;
        int streamRequestId;
        bool pendingIo;
        bool ioError;
        bool runtimeAssetLoad;
    };


    struct SndPatch
    {
        const char* name;
        unsigned int elementCount;
        unsigned int* elements;
    };

    typedef unsigned short LeafBrush;
    typedef __declspec(align(128)) cbrush_t cbrush_array_t;
    typedef __declspec(align(128)) Bounds BoundsArray;


    struct ClipInfo
    {
        int planeCount;
        cplane_s* planes;
        unsigned int numMaterials;
        ClipMaterial* materials;
        unsigned int numBrushSides;
        cbrushside_t* brushsides;
        unsigned int leafbrushNodesCount;
        cLeafBrushNode_s* leafbrushNodes;
        unsigned int numLeafBrushes;
        LeafBrush* leafbrushes;
        unsigned int numBrushVerts;
        vec3_t* brushVerts;
        unsigned int nuinds;
        unsigned __int16* uinds;
        unsigned __int16 numBrushes;
        cbrush_array_t* brushes;
        BoundsArray* brushBounds;
        int* brushContents;
    };


    struct __declspec(align(4)) cLeaf_s
    {
        unsigned __int16 firstCollAabbIndex;
        unsigned __int16 collAabbCount;
        int brushContents;
        int terrainContents;
        vec3_t mins;
        vec3_t maxs;
        int leafBrushNode;
        __int16 cluster;
    };


    struct cmodel_t
    {
        vec3_t mins;
        vec3_t maxs;
        float radius;
        ClipInfo* info;
        cLeaf_s leaf;
    };


    struct clipMap_t
    {
        const char* name;
        int isInUse;
        ClipInfo info;
        ClipInfo* pInfo;
        unsigned int numStaticModels;
        cStaticModel_s* staticModelList;
        unsigned int numNodes;
        cNode_t* nodes;
        unsigned int numLeafs;
        cLeaf_s* leafs;
        unsigned int vertCount;
        vec3_t* verts;
        int triCount;
        unsigned __int16 (*triIndices)[3];
        char* triEdgeIsWalkable; // Saved as 1 bit per edge rounded up to the next 4 bytes
        int partitionCount;
        CollisionPartition* partitions;
        int aabbTreeCount;
        CollisionAabbTree* aabbTrees;
        unsigned int numSubModels;
        cmodel_t* cmodels;
        int numClusters;
        int clusterBytes;
        char* visibility;
        int vised;
        MapEnts* mapEnts;
        cbrush_t* box_brush;
        cmodel_t box_model;
        unsigned __int16 originalDynEntCount;
        unsigned __int16 dynEntCount[4];
        DynEntityDef* dynEntDefList[2];
        DynEntityPose* dynEntPoseList[2];
        DynEntityClient* dynEntClientList[2];
        DynEntityServer* dynEntServerList[2];
        DynEntityColl* dynEntCollList[4];
        int num_constraints;
        PhysConstraint* constraints;
        int max_ropes;
        rope_t* ropes;
        unsigned int checksum;
    };


    struct ComWorld
    {
        const char* name;
        int isInUse;
        unsigned int primaryLightCount;
        ComPrimaryLight* primaryLights;
    };


    struct PathData
    {
        unsigned int nodeCount;
        unsigned int originalNodeCount;
        pathnode_t* nodes;
        pathbasenode_t* basenodes;
        int visBytes;
        char* pathVis;
        int smoothBytes;
        char* smoothCache;
        int nodeTreeCount;
        pathnode_tree_t* nodeTree;
    };


    struct GameWorldSp
    {
        const char* name;
        PathData path;
    };


    struct GameWorldMp
    {
        const char* name;
        PathData path;
    };


    struct MapTriggers
    {
        unsigned int count;
        TriggerModel* models;
        unsigned int hullCount;
        TriggerHull* hulls;
        unsigned int slabCount;
        TriggerSlab* slabs;
    };


    struct MapEnts
    {
        const char* name;
        char* entityString;
        int numEntityChars;
        MapTriggers trigger;
    };


    struct GfxWorldStreamInfo
    {
        int aabbTreeCount;
        GfxStreamingAabbTree* aabbTrees;
        int leafRefCount;
        int* leafRefs;
    };


    union vec4_t
    {
        float v[4];

        struct
        {
            float x;
            float y;
            float z;
            float w;
        };

        struct
        {
            float r;
            float g;
            float b;
            float a;
        };
    };


    struct GfxWorldSun
    {
        unsigned int control;
        vec3_t angles;
        vec4_t ambientColor;
        vec4_t sunCd;
        vec4_t sunCs;
        vec4_t skyColor;
        float exposure;
    };


    struct GfxWorldFog
    {
        float baseDist;
        float halfDist;
        float baseHeight;
        float halfHeight;
        float sunFogPitch;
        float sunFogYaw;
        float sunFogInner;
        float sunFogOuter;
        vec3_t fogColor;
        float fogOpacity;
        vec3_t sunFogColor;
        float sunFogOpacity;
    };


    struct SunLightParseParams
    {
        char name[64];
        GfxWorldSun initWorldSun[1];
        float fogTransitionTime;
        GfxWorldFog initWorldFog[1];
    };


    struct GfxSkyDynamicIntensity
    {
        float angle0;
        float angle1;
        float factor0;
        float factor1;
    };


    struct GfxWorldDpvsPlanes
    {
        int cellCount;
        cplane_s* planes;
        unsigned __int16* nodes;
        unsigned int* sceneEntCellBits;
    };


    struct GfxWorldVertexData0
    {
        byte128* data;
        ID3D11Buffer* vb;
    };


    struct GfxWorldVertexData1
    {
        byte128* data;
        ID3D11Buffer* vb;
    };


    struct GfxWorldDraw
    {
        unsigned int reflectionProbeCount;
        GfxReflectionProbe* reflectionProbes;
        GfxTexture* reflectionProbeTextures;
        int lightmapCount;
        GfxLightmapArray* lightmaps;
        GfxTexture* lightmapPrimaryTextures;
        GfxTexture* lightmapSecondaryTextures;
        unsigned int vertexCount;
        unsigned int vertexDataSize0;
        GfxWorldVertexData0 vd0;
        unsigned int vertexDataSize1;
        GfxWorldVertexData1 vd1;
        int indexCount;
        unsigned __int16* indices;
        ID3D11Buffer* indexBuffer;
    };

    typedef __declspec(align(4)) char aligned_byte_pointer;
    typedef __declspec(align(4)) GfxCompressedLightGridCoeffs GfxCompressedLightGridCoeffs_align4;

    struct GfxLightGrid
    {
        unsigned int sunPrimaryLightIndex;
        unsigned __int16 mins[3];
        unsigned __int16 maxs[3];
        float offset;
        unsigned int rowAxis;
        unsigned int colAxis;
        unsigned __int16* rowDataStart;
        unsigned int rawRowDataSize;
        aligned_byte_pointer* rawRowData;
        unsigned int entryCount;
        GfxLightGridEntry* entries;
        unsigned int colorCount;
        GfxCompressedLightGridColors* colors;
        unsigned int coeffCount;
        GfxCompressedLightGridCoeffs_align4* coeffs;
        unsigned int skyGridVolumeCount;
        GfxSkyGridVolume* skyGridVolumes;
    };


    struct sunflare_t
    {
        bool hasValidData;
        Material* spriteMaterial;
        Material* flareMaterial;
        float spriteSize;
        float flareMinSize;
        float flareMinDot;
        float flareMaxSize;
        float flareMaxDot;
        float flareMaxAlpha;
        int flareFadeInTime;
        int flareFadeOutTime;
        float blindMinDot;
        float blindMaxDot;
        float blindMaxDarken;
        int blindFadeInTime;
        int blindFadeOutTime;
        float glareMinDot;
        float glareMaxDot;
        float glareMaxLighten;
        int glareFadeInTime;
        int glareFadeOutTime;
        vec3_t sunFxPosition;
    };

    typedef __declspec(align(4)) GfxDrawSurf GfxDrawSurf_align4;


    struct GfxWorldDpvsStatic
    {
        unsigned int smodelCount;
        unsigned int staticSurfaceCount;
        unsigned int litSurfsBegin;
        unsigned int litSurfsEnd;
        unsigned int litTransSurfsBegin;
        unsigned int litTransSurfsEnd;
        unsigned int emissiveOpaqueSurfsBegin;
        unsigned int emissiveOpaqueSurfsEnd;
        unsigned int emissiveTransSurfsBegin;
        unsigned int emissiveTransSurfsEnd;
        unsigned int smodelVisDataCount;
        unsigned int surfaceVisDataCount;
        raw_byte128* smodelVisData[3];
        raw_byte128* surfaceVisData[3];
        raw_byte128* smodelVisDataCameraSaved;
        raw_byte128* surfaceVisDataCameraSaved;
        unsigned __int16* sortedSurfIndex;
        GfxStaticModelInst* smodelInsts;
        GfxSurface* surfaces;
        GfxStaticModelDrawInst* smodelDrawInsts;
        GfxDrawSurf_align4* surfaceMaterials;
        raw_byte128* surfaceCastsSunShadow;
        raw_byte128* surfaceCastsShadow;
        raw_byte128* smodelCastsShadow;
        volatile int usageCount;
    };


    struct GfxWorldDpvsDynamic
    {
        unsigned int dynEntClientWordCount[2];
        unsigned int dynEntClientCount[2];
        unsigned int* dynEntCellBits[2];
        raw_byte16* dynEntVisData[2][3];
        volatile int usageCount;
    };


    struct GfxWaterBuffer
    {
        unsigned int bufferSize;
        vec4_t* buffer;
    };


    struct GfxWorld
    {
        const char* name;
        const char* baseName;
        int planeCount;
        int nodeCount;
        int surfaceCount;
        GfxWorldStreamInfo streamInfo;
        const char* skyBoxModel;
        SunLightParseParams sunParse;
        GfxLight* sunLight;
        unsigned int sunPrimaryLightIndex;
        unsigned int primaryLightCount;
        unsigned int coronaCount;
        GfxLightCorona* coronas;
        unsigned int shadowMapVolumeCount;
        GfxShadowMapVolume* shadowMapVolumes;
        unsigned int shadowMapVolumePlaneCount;
        GfxVolumePlane* shadowMapVolumePlanes;
        unsigned int exposureVolumeCount;
        GfxExposureVolume* exposureVolumes;
        unsigned int exposureVolumePlaneCount;
        GfxVolumePlane* exposureVolumePlanes;
        unsigned int worldFogVolumeCount;
        GfxWorldFogVolume* worldFogVolumes;
        unsigned int worldFogVolumePlaneCount;
        GfxVolumePlane* worldFogVolumePlanes;
        unsigned int worldFogModifierVolumeCount;
        GfxWorldFogModifierVolume* worldFogModifierVolumes;
        unsigned int worldFogModifierVolumePlaneCount;
        GfxVolumePlane* worldFogModifierVolumePlanes;
        unsigned int lutVolumeCount;
        GfxLutVolume* lutVolumes;
        unsigned int lutVolumePlaneCount;
        GfxVolumePlane* lutVolumePlanes;
        GfxSkyDynamicIntensity skyDynIntensity;
        GfxWorldDpvsPlanes dpvsPlanes;
        int cellBitsCount;
        GfxCell* cells;
        GfxWorldDraw draw;
        GfxLightGrid lightGrid;
        int modelCount;
        GfxBrushModel* models;
        vec3_t mins;
        vec3_t maxs;
        unsigned int checksum;
        int materialMemoryCount;
        MaterialMemory* materialMemory;
        sunflare_t sun;
        vec4_t outdoorLookupMatrix[4];
        GfxImage* outdoorImage;
        unsigned int* cellCasterBits;
        GfxSceneDynModel* sceneDynModel;
        GfxSceneDynBrush* sceneDynBrush;
        unsigned int* primaryLightEntityShadowVis;
        unsigned int* primaryLightDynEntShadowVis[2];
        unsigned int numSiegeSkinInsts;
        SSkinInstance* siegeSkinInsts;
        GfxShadowGeometry* shadowGeom;
        GfxLightRegion* lightRegion;
        GfxWorldDpvsStatic dpvs;
        GfxWorldDpvsDynamic dpvsDyn;
        float waterDirection;
        GfxWaterBuffer waterBuffers[2];
        Material* waterMaterial;
        Material* coronaMaterial;
        Material* ropeMaterial;
        Material* lutMaterial;
        unsigned int numOccluders;
        Occluder* occluders;
        unsigned int numOutdoorBounds;
        GfxOutdoorBounds* outdoorBounds;
        unsigned int heroLightCount;
        unsigned int heroLightTreeCount;
        GfxHeroLight* heroLights;
        GfxHeroLightTree* heroLightTree;
        unsigned int lightingFlags;
        int lightingQuality;
    };


    struct __declspec(align(4)) GfxLightImage
    {
        GfxImage* image;
        char samplerState;
    };


    struct GfxLightDef
    {
        const char* name;
        GfxLightImage attenuation;
        int lmapLookupStart;
    };


    struct Font_s
    {
        const char* fontName;
        int pixelHeight;
        int isScalingAllowed;
        int glyphCount;
        int kerningPairsCount;
        Material* material;
        Material* glowMaterial;
        Glyph* glyphs;
        KerningPairs* kerningPairs;
    };


    struct FontIcon
    {
        const char* name;
        int numEntries;
        int numAliasEntries;
        FontIconEntry* fontIconEntry;
        FontIconAlias* fontIconAlias;
    };


    struct MenuList
    {
        const char* name;
        int menuCount;
        menuDef_t** menus;
    };


    struct rectDef_s
    {
        float x;
        float y;
        float w;
        float h;
        int horzAlign;
        int vertAlign;
    };


    struct windowDef_t
    {
        const char* name;
        rectDef_s rect;
        rectDef_s rectClient;
        const char* group;
        char style;
        char border;
        char modal;
        char frameSides;
        float frameTexSize;
        float frameSize;
        int ownerDraw;
        int ownerDrawFlags;
        float borderSize;
        int staticFlags;
        int dynamicFlags[1];
        int nextTime;
        vec4_t foreColor;
        vec4_t backColor;
        vec4_t borderColor;
        vec4_t outlineColor;
        float rotation;
        Material* background;
    };


    struct ExpressionStatement
    {
        char* filename;
        int line;
        int numRpn;
        expressionRpn* rpn;
    };


    struct __declspec(align(8)) menuDef_t
    {
        windowDef_t window;
        const char* font;
        int fullScreen;
        int ui3dWindowId;
        int itemCount;
        int fontIndex;
        int cursorItem[1];
        int fadeCycle;
        int priority;
        float fadeClamp;
        float fadeAmount;
        float fadeInAmount;
        float blurRadius;
        int openSlideSpeed;
        int closeSlideSpeed;
        int openSlideDirection;
        int closeSlideDirection;
        rectDef_s initialRectInfo;
        int openFadingTime;
        int closeFadingTime;
        int fadeTimeCounter;
        int slideTimeCounter;
        GenericEventHandler* onEvent;
        ItemKeyHandler* onKey;
        ExpressionStatement visibleExp;
        unsigned __int64 showBits;
        unsigned __int64 hideBits;
        const char* allowedBinding;
        const char* soundName;
        int imageTrack;
        int control;
        vec4_t focusColor;
        vec4_t disableColor;
        ExpressionStatement rectXExp;
        ExpressionStatement rectYExp;
        itemDef_s** items;
    };


    struct LocalizeEntry
    {
        const char* value;
        const char* name;
    };


    enum weaponIconRatioType_t
    {
        WEAPON_ICON_RATIO_1TO1 = 0x0,
        WEAPON_ICON_RATIO_2TO1 = 0x1,
        WEAPON_ICON_RATIO_4TO1 = 0x2,
        WEAPON_ICON_RATIO_COUNT = 0x3,
    };

    enum eAttachment
    {
        ATTACHMENT_NONE = 0x0,
        ATTACHMENT_ACOG = 0x1,
        ATTACHMENT_DUALCLIP = 0x2,
        ATTACHMENT_DUALOPTIC = 0x3,
        ATTACHMENT_DW = 0x4,
        ATTACHMENT_EXTBARREL = 0x5,
        ATTACHMENT_EXTCLIP = 0x6,
        ATTACHMENT_EXTRAMAGS = 0x7,
        ATTACHMENT_FASTADS = 0x8,
        ATTACHMENT_FASTRELOAD = 0x9,
        ATTACHMENT_FMJ = 0xA,
        ATTACHMENT_GL = 0xB,
        ATTACHMENT_GRIP = 0xC,
        ATTACHMENT_HOLO = 0xD,
        ATTACHMENT_IR = 0xE,
        ATTACHMENT_IRONSIGHTS = 0xF,
        ATTACHMENT_LONGBREATH = 0x10,
        ATTACHMENT_MK = 0x11,
        ATTACHMENT_MMS = 0x12,
        ATTACHMENT_RANGEFINDER = 0x13,
        ATTACHMENT_REFLEX = 0x14,
        ATTACHMENT_RF = 0x15,
        ATTACHMENT_SELECTFIRE = 0x16,
        ATTACHMENT_SILENCER = 0x17,
        ATTACHMENT_STACKFIRE = 0x18,
        ATTACHMENT_STALKER = 0x19,
        ATTACHMENT_STEADYAIM = 0x1A,
        ATTACHMENT_SWAYREDUC = 0x1B,
        ATTACHMENT_TACKNIFE = 0x1C,
        ATTACHMENT_VZOOM = 0x1D,
        ATTACHMENT_TYPE_COUNT = 0x1E,
        ATTACHMENT_INVALID = 0x1E,
    };


    enum eAttachmentPoint
    {
        ATTACHMENT_POINT_NONE = 0x0,
        ATTACHMENT_POINT_TOP = 0x1,
        ATTACHMENT_POINT_FIRST = 0x1,
        ATTACHMENT_POINT_BOTTOM = 0x2,
        ATTACHMENT_POINT_TRIGGER = 0x3,
        ATTACHMENT_POINT_MUZZLE = 0x4,
        ATTACHMENT_POINT_GUNPERK = 0x5,
        ATTACHMENT_POINT_COUNT = 0x6,
        ATTACHMENT_POINT_INVALID = 0x6,
    };


    enum PenetrateType
    {
        PENETRATE_TYPE_NONE = 0x0,
        PENETRATE_TYPE_SMALL = 0x1,
        PENETRATE_TYPE_MEDIUM = 0x2,
        PENETRATE_TYPE_LARGE = 0x3,
        PENETRATE_TYPE_COUNT = 0x4,
    };


    enum weapFireType_t
    {
        WEAPON_FIRETYPE_FULLAUTO = 0x0,
        WEAPON_FIRETYPE_SINGLESHOT = 0x1,
        WEAPON_FIRETYPE_BURSTFIRE2 = 0x2,
        WEAPON_FIRETYPE_BURSTFIRE3 = 0x3,
        WEAPON_FIRETYPE_BURSTFIRE4 = 0x4,
        WEAPON_FIRETYPE_BURSTFIRE5 = 0x5,
        WEAPON_FIRETYPE_STACKED = 0x6,
        WEAPON_FIRETYPE_MINIGUN = 0x7,
        WEAPON_FIRETYPE_CHARGESHOT = 0x8,
        WEAPON_FIRETYPE_JETGUN = 0x9,
        WEAPON_FIRETYPECOUNT = 0xA,
    };


    struct WeaponAttachment
    {
        const char* szInternalName;
        const char* szDisplayName;
        eAttachment attachmentType;
        eAttachmentPoint attachmentPoint;
        PenetrateType penetrateType;
        weapFireType_t fireType;
        int firstRaisePriority;
        float fHipIdleAmount;
        bool bAltWeaponAdsOnly;
        bool bAltWeaponDisableSwitching;
        float altScopeADSTransInTime;
        float altScopeADSTransOutTime;
        bool bSilenced;
        bool bDualMag;
        bool laserSight;
        bool bInfraRed;
        bool bUseAsMelee;
        bool bDualWield;
        bool sharedAmmo;
        float fDamageRangeScale;
        float fAdsZoomFov1;
        float fAdsZoomFov2;
        float fAdsZoomFov3;
        float fAdsZoomInFrac;
        float fAdsZoomOutFrac;
        float fAdsTransInTimeScale;
        float fAdsTransOutTimeScale;
        float fAdsRecoilReductionRate;
        float fAdsRecoilReductionLimit;
        float fAdsViewKickCenterSpeedScale;
        float fAdsIdleAmountScale;
        bool swayOverride;
        float swayMaxAngle;
        float swayLerpSpeed;
        float swayPitchScale;
        float swayYawScale;
        float swayHorizScale;
        float swayVertScale;
        bool adsSwayOverride;
        float adsSwayMaxAngle;
        float adsSwayLerpSpeed;
        float adsSwayPitchScale;
        float adsSwayYawScale;
        float fAdsSwayHorizScale;
        float fAdsSwayVertScale;
        float adsMoveSpeedScale;
        float fHipSpreadMinScale;
        float fHipSpreadMaxScale;
        float strafeRotR;
        float standMoveF;
        vec3_t vStandRot;
        float fFireTimeScale;
        float fReloadTimeScale;
        float fReloadEmptyTimeScale;
        float fReloadAddTimeScale;
        float fReloadQuickTimeScale;
        float fReloadQuickEmptyTimeScale;
        float fReloadQuickAddTimeScale;
        bool mmsWeapon;
        bool mmsInScope;
        float mmsFOV;
        float mmsAspect;
        float mmsMaxDist;
        float clipSizeScale;
        int iClipSize;
        unsigned int stackFire;
        float stackFireSpread;
        float stackFireAccuracyDecay;
        unsigned int perks[2];
        float customFloat0;
        float customFloat1;
        float customFloat2;
        int customBool0;
        int customBool1;
        int customBool2;
    };


    enum weapOverlayReticle_t
    {
        WEAPOVERLAYRETICLE_NONE = 0x0,
        WEAPOVERLAYRETICLE_CROSSHAIR = 0x1,
        WEAPOVERLAYRETICLE_NUM = 0x2,
    };


    struct WeaponAttachmentUnique
    {
        const char* szInternalName;
        eAttachment attachmentType;
        int siblingLink;
        int childLink;
        int combinedAttachmentTypeMask;
        const char* szAltWeaponName;
        unsigned int altWeaponIndex;
        const char* szDualWieldWeaponName;
        unsigned int dualWieldWeaponIndex;
        unsigned __int16* hideTags;
        XModel* viewModel;
        XModel* viewModelAdditional;
        XModel* viewModelADS;
        XModel* worldModel;
        XModel* worldModelAdditional;
        const char* viewModelTag;
        const char* worldModelTag;
        vec3_t viewModelOffsets;
        vec3_t worldModelOffsets;
        vec3_t viewModelRotations;
        vec3_t worldModelRotations;
        vec3_t viewModelAddOffsets;
        vec3_t worldModelAddOffsets;
        vec3_t viewModelAddRotations;
        vec3_t worldModelAddRotations;
        WeaponCamo* weaponCamo;
        bool disableBaseWeaponAttachment;
        bool disableBaseWeaponClip;
        bool overrideBaseWeaponAttachmentOffsets;
        vec3_t viewModelOffsetBaseAttachment;
        vec3_t worldModelOffsetBaseAttachment;
        Material* overlayMaterial;
        Material* overlayMaterialLowRes;
        weapOverlayReticle_t overlayReticle;
        int iFirstRaiseTime;
        int iAltRaiseTime;
        int iAltDropTime;
        int iReloadAmmoAdd;
        int iReloadStartAdd;
        bool bSegmentedReload;
        const char** szXAnims;
        int animationOverrides[3];
        float* locationDamageMultipliers;
        int soundOverrides;
        const char* fireSound;
        const char* fireSoundPlayer;
        const char* fireLoopSound;
        const char* fireLoopSoundPlayer;
        const char* fireLoopEndSound;
        const char* fireLoopEndSoundPlayer;
        const char* fireStartSound;
        const char* fireStopSound;
        const char* fireStartSoundPlayer;
        const char* fireStopSoundPlayer;
        const char* fireLastSound;
        const char* fireLastSoundPlayer;
        const char* fireKillcamSound;
        const char* fireKillcamSoundPlayer;
        int effectOverrides;
        FxEffectDef* viewFlashEffect;
        FxEffectDef* worldFlashEffect;
        TracerDef* tracerType;
        TracerDef* enemyTracerType;
        float adsDofStart;
        float adsDofEnd;
        int iAmmoIndex;
        int iClipIndex;
        bool bOverrideLeftHandIK;
        bool bOverrideLeftHandProneIK;
        vec3_t ikLeftHandOffset;
        vec3_t ikLeftHandRotation;
        vec3_t ikLeftHandProneOffset;
        vec3_t ikLeftHandProneRotation;
        float customFloat0;
        float customFloat1;
        float customFloat2;
        int customBool0;
        int customBool1;
        int customBool2;
    };


    struct WeaponCamo
    {
        const char* name;
        GfxImage* solidBaseImage;
        GfxImage* patternBaseImage;
        WeaponCamoSet* camoSets;
        unsigned int numCamoSets;
        WeaponCamoMaterialSet* camoMaterials;
        unsigned int numCamoMaterials;
    };


    struct SndDriverGlobals
    {
        const char* name;
        unsigned int groupCount;
        SndVolumeGroup* groups;
        unsigned int curveCount;
        SndCurve* curves;
        unsigned int panCount;
        SndPan* pans;
        unsigned int duckGroupCount;
        SndDuckGroup* duckGroups;
        unsigned int contextCount;
        SndContext* contexts;
        unsigned int masterCount;
        SndMaster* masters;
        unsigned int voiceDuckCount;
        SndSidechainDuck* voiceDucks;
        unsigned int futzCount;
        SndFutz* futzes;
    };


    struct FxFloatRange
    {
        float base;
        float amplitude;
    };


    const struct FxEffectDef
    {
        const char* name;
        unsigned __int16 flags;
        char efPriority;
        __int16 elemDefCountLooping;
        __int16 elemDefCountOneShot;
        __int16 elemDefCountEmission;
        int totalSize;
        int msecLoopingLife;
        int msecNonLoopingLife;
        FxElemDef* elemDefs;
        vec3_t boundingBoxDim;
        vec3_t boundingBoxCentre;
        float occlusionQueryDepthBias;
        int occlusionQueryFadeIn;
        int occlusionQueryFadeOut;
        FxFloatRange occlusionQueryScaleRange;
    };


    struct FxImpactTable
    {
        const char* name;
        FxImpactEntry* table;
    };


    struct RawFile
    {
        const char* name;
        int len;
        const char16* buffer;
    };


    struct StringTable
    {
        const char* name;
        int columnCount;
        int rowCount;
        StringTableCell* values;
        __int16* cellIndex;
    };


    enum LbUpdateType
    {
        LBUPDATE_TYPE_NORMAL = 0x0,
        LBUPDATE_TYPE_RANK = 0x1,
        LBUPDATE_TYPE_COMBINE = 0x2,
        LBUPDATE_TYPE_COUNT = 0x3,
    };


    struct LeaderboardDef
    {
        const char* name;
        unsigned int id;
        int columnCount;
        int dwColumnCount;
        int xpColId;
        int prestigeColId;
        LbColumnDef* columns;
        LbUpdateType updateType;
        int trackTypes;
    };


    struct gump_info_t
    {
        char* name;
        int size;
    };


    struct overlay_info_t
    {
        char* name;
        int size;
    };


    struct XGlobals
    {
        const char* name;
        int xanimStreamBufferSize;
        int cinematicMaxWidth;
        int cinematicMaxHeight;
        int extracamResolution;
        vec4_t screenClearColor;
        int bigestGumpSize;
        int gumpsCount;
        gump_info_t gumps[32];
        int bigestOverlaySize;
        int overlayCount;
        overlay_info_t overlays[32];
    };


    struct ddlRoot_t
    {
        const char* name;
        ddlDef_t* ddlDef;
    };


    struct Glasses
    {
        const char* name;
        unsigned int numGlasses;
        Glass* glasses;
        char* workMemory;
        unsigned int workMemorySize;
        unsigned int smallAllocatorBlocks;
        unsigned int maxGroups;
        unsigned int maxShards;
        unsigned int maxPhysics;
        unsigned int shardMemorySize;
        unsigned int maxFreeCmd;
        unsigned int numSlots;
        unsigned int numVerts;
        unsigned int numIndices;
    };


    struct EmblemLayer
    {
        int cost;
        int unlockLevel;
        int unlockPLevel;
    };


    struct EmblemCategory
    {
        const char* name;
        const char* description;
    };


    struct EmblemIconType
    {
        const char* name;
        const char* description;
    };


    struct EmblemBGCategory
    {
        const char* name;
        const char* description;
    };


    struct EmblemIcon
    {
        GfxImage* image;
        const char* description;
        float outlineSize;
        int cost;
        int unlockLevel;
        int unlockPLevel;
        int unclassifyAt;
        int sortKey;
        unsigned __int16 iconType;
        unsigned __int16 category;
    };


    struct EmblemBackground
    {
        Material* material;
        const char* description;
        int cost;
        int unlockLevel;
        int unlockPLevel;
        int unclassifyAt;
        int sortKey;
        unsigned __int16 bgCategory;
        int mtxIndex;
    };


    struct EmblemSet
    {
        int colorCount;
        int layerCount;
        EmblemLayer* layers;
        int categoryCount;
        EmblemCategory* categories;
        int iconTypeCount;
        EmblemIconType* iconTypes;
        int bgCategoryCount;
        EmblemBGCategory* bgCategories;
        int iconCount;
        EmblemIcon* icons;
        int backgroundCount;
        EmblemBackground* backgrounds;
        int backgroundLookupCount;
        __int16* backgroundLookup;
    };


    struct ScriptParseTree
    {
        const char* name;
        int len;
        byte32* buffer;
    };


    struct KeyValuePairs
    {
        const char* name;
        int numVariables;
        KeyValuePair* keyValuePairs;
    };


    struct view_limits_t
    {
        float horizSpanLeft;
        float horizSpanRight;
        float vertSpanUp;
        float vertSpanDown;
        float horizResistLeft;
        float horizResistRight;
        float vertResistUp;
        float vertResistDown;
    };


    union vec2_t
    {
        float v[2];

        struct
        {
            float x;
            float y;
        };
    };


    enum TractionType
    {
        TRACTION_TYPE_FRONT = 0x0,
        TRACTION_TYPE_BACK = 0x1,
        TRACTION_TYPE_ALL_WD = 0x2,
        NUM_TRACTION_TYPES = 0x3,
    };


    struct VehicleParameter
    {
        float m_speed_max;
        float m_accel_max;
        float m_reverse_scale;
        float m_steer_angle_max;
        float m_steer_angle_speed_scale;
        float m_steer_speed;
        float m_wheel_radius;
        float m_susp_spring_k;
        float m_susp_damp_k;
        float m_susp_adj;
        float m_susp_hard_limit;
        float m_susp_min_height;
        float m_tire_fric_fwd;
        float m_tire_fric_side;
        float m_tire_fric_brake;
        float m_tire_fric_hand_brake;
        float m_body_mass;
        float m_roll_stability;
        float m_pitch_stability;
        float m_pitch_roll_resistance;
        float m_yaw_resistance;
        float m_upright_strength;
        float m_tilt_fakey;
        float m_peel_out_max_speed;
        float m_tire_damp_coast;
        float m_tire_damp_brake;
        float m_tire_damp_hand;
        float m_auto_hand_brake_min_speed;
        TractionType m_traction_type;
        const char* m_name;
        vec3_t m_bbox_min;
        vec3_t m_bbox_max;
        vec3_t m_mass_center_offset;
        vec3_t m_buoyancybox_min;
        vec3_t m_buoyancybox_max;
        float m_water_speed_max;
        float m_water_accel_max;
        float m_water_turn_accel;
        float m_water_turn_speed_max;
        float m_water_ebrake_power;
        vec3_t m_boat_motor_offset;
        float m_boat_speed_rise;
        float m_boat_speed_tilt;
        float m_boat_side_fric_scale;
        float m_boat_forward_fric_scale;
        float m_boat_vertical_fric_scale;
        float m_jump_force;
        float m_tire_fric_side_max;
        bool m_drive_on_walls;
        float m_linear_drag_scale;
        float m_angular_drag_scale;
    };


    struct VehicleDriveBySound
    {
        int apex;
        const char* name;
        unsigned int alias;
    };


    struct VehicleEngineSound
    {
        const char* name;
        unsigned int alias;
        float params[5];
    };


    struct VehicleGearData
    {
        float minRPM;
        float maxRPM;
        float ratio;
    };


    struct VehicleEngine
    {
        float idleRpms;
        float maxRpms;
        float maxTorque;
        float brakingCoeff;
        vec4_t loadFadeParams;
        float loadScale;
        float loadSmoothing;
        float throttleLag;
        float pitchScale;
        VehicleEngineSound onload[5];
        VehicleEngineSound offload[5];
        int numGears;
        int loopLastGear;
        VehicleGearData gears[10];
    };


    struct VehicleAntenna
    {
        float springK;
        float damp;
        float length;
        float gravity;
    };

    enum VehicleSeatPositions
    {
        VEH_POS_NONE = 0xFFFFFFFF,
        VEH_POS_DRIVER = 0x0,
        VEH_POS_MIN_GUNNER = 0x1,
        VEH_POS_GUNNER_1 = 0x1,
        VEH_POS_GUNNER_2 = 0x2,
        VEH_POS_GUNNER_3 = 0x3,
        VEH_POS_GUNNER_4 = 0x4,
        VEH_POS_MAX_GUNNER = 0x4,
        VEH_POS_MIN_PASSENGER = 0x5,
        VEH_POS_PASSENGER_1 = 0x5,
        VEH_POS_PASSENGER_2 = 0x6,
        VEH_POS_PASSENGER_3 = 0x7,
        VEH_POS_PASSENGER_4 = 0x8,
        VEH_POS_PASSENGER_5 = 0x9,
        VEH_POS_PASSENGER_6 = 0xA,
        VEH_POS_MAX_PASSENGER = 0xA,
        NUM_VEHICLE_POSITIONS = 0xB,
    };

    enum VehicleSound
    {
        VEH_TURRET_SPIN_SND = 0x0,
        VEH_TURRET_STOP_SND = 0x1,
        NUM_VEHICLE_SNDS = 0x2,
    };

    enum VehicleMaterialSound
    {
        VEH_WHEEL_ROAD_NOISE = 0x0,
        VEH_WHEEL_SLIDING = 0x1,
        VEH_WHEEL_PEELING_OUT = 0x2,
        NUM_VEHICLE_MATERIAL_SNDS = 0x3,
    };

    enum VehicleMantlePoints
    {
        MANTLE_ANGLE_FRONT = 0x0,
        MANTLE_ANGLE_BACK = 0x1,
        MANTLE_ANGLE_LEFT = 0x2,
        MANTLE_ANGLE_RIGHT = 0x3,
        MANTLE_ANGLE_MAX = 0x4,
    };

    enum VehicleWheelType
    {
        FL_WHEEL = 0x0,
        FR_WHEEL = 0x1,
        BL_WHEEL = 0x2,
        BR_WHEEL = 0x3,
        ML_WHEEL = 0x4,
        MR_WHEEL = 0x5,
        NUM_VEHICLE_WHEELS = 0x6,
    };

    enum VehicleEngineSoundParam
    {
        VEH_ENGINESND_FADE_IN_START = 0x0,
        VEH_ENGINESND_FADE_IN_END = 0x1,
        VEH_ENGINESND_FADE_OUT_START = 0x2,
        VEH_ENGINESND_FADE_OUT_END = 0x3,
        VEH_ENGINESND_PITCH_REF = 0x4,
        NUM_VEHICLE_ENGINESND_PARAMS = 0x5,
    };

    enum team_t
    {
        TEAM_FREE = 0x0,
        TEAM_BAD = 0x0,
        TEAM_ALLIES = 0x1,
        TEAM_AXIS = 0x2,
        TEAM_THREE = 0x3,
        TEAM_FOUR = 0x4,
        TEAM_FIVE = 0x5,
        TEAM_SIX = 0x6,
        TEAM_SEVEN = 0x7,
        TEAM_EIGHT = 0x8,
        TEAM_NUM_PLAYING_TEAMS = 0x9,
        TEAM_SPECTATOR = 0x9,
        TEAM_NUM_TEAMS = 0xA,
        TEAM_LOCALPLAYERS = 0xB,
        TEAM_FIRST_PLAYING_TEAM = 0x1,
        TEAM_LAST_PLAYING_TEAM = 0x8,
    };

    struct VehicleDef
    {
        const char* name;
        __int16 type;
        int remoteControl;
        int bulletDamage;
        int armorPiercingDamage;
        int grenadeDamage;
        int projectileDamage;
        int projectileSplashDamage;
        int heavyExplosiveDamage;
        __int16 cameraMode;
        int autoRecenterOnAccel;
        int thirdPersonDriver;
        int thirdPersonUseVehicleRoll;
        int thirdPersonCameraPitchVehicleRelative;
        int thirdPersonCameraHeightWorldRelative;
        float thirdPersonCameraRange;
        float thirdPersonCameraMinPitchClamp;
        float thirdPersonCameraMaxPitchClamp;
        float thirdPersonCameraHeight[2];
        float thirdPersonCameraPitch[2];
        int cameraAlwaysAutoCenter;
        float cameraAutoCenterLerpRate;
        float cameraAutoCenterMaxLerpRate;
        float thirdPersonCameraSpringDistance;
        float thirdPersonCameraSpringTime;
        float thirdPersonCameraHandbrakeTurnRateInc;
        float cameraFOV;
        float cameraRollFraction;
        vec3_t tagPlayerOffset;
        int killcamCollision;
        float killcamDist;
        float killcamZDist;
        float killcamMinDist;
        float killcamZTargetOffset;
        float killcamFOV;
        float killcamNearBlur;
        float killcamNearBlurStart;
        float killcamNearBlurEnd;
        float killcamFarBlur;
        float killcamFarBlurStart;
        float killcamFarBlurEnd;
        int isDrivable;
        int numberOfSeats;
        int numberOfGunners;
        int seatSwitchOrder[11];
        int driverControlledGunPos;
        float entryPointRadius[5];
        float texScrollScale;
        float wheelRotRate;
        float extraWheelRotScale;
        int wheelChildTakesSteerYaw;
        float maxSpeed;
        float maxSpeedVertical;
        float accel;
        float accelVertical;
        float rotRate;
        float rotAccel;
        float maxBodyPitch;
        float maxBodyRoll;
        float collisionDamage;
        float collisionSpeed;
        float suspensionTravel;
        float heliCollisionScalar;
        float viewPitchOffset;
        float viewInfluence;
        float tiltFromAcceleration[2];
        float tiltFromDeceleration[2];
        float tiltFromVelocity[2];
        float tiltSpeed[2];
        const char* turretWeapon;
        view_limits_t turretViewLimits;
        float turretRotRate;
        int turretClampPlayerView;
        int turretLockTurretToPlayerView;
        const char* gunnerWeapon[4];
        unsigned __int16 gunnerWeaponIndex[4];
        float gunnerRotRate;
        vec2_t gunnerRestAngles[4];
        view_limits_t passengerViewLimits[6];
        const char* sndNames[2];
        unsigned int sndIndices[2];
        const char* sndMaterialNames[3];
        float skidSpeedMin;
        float skidSpeedMax;
        const char* futzName;
        float futzBlend;
        int animType;
        const char* animSet;
        int scriptedAnimationEntry;
        float mantleAngles[4];
        unsigned __int16 extraWheelTags[4];
        unsigned __int16 driverHideTag;
        XModel* attachmentModels[4];
        unsigned __int16 attachmentTags[4];
        XModel* deathAttachmentModels[4];
        unsigned __int16 deathAttachmentTags[4];
        float tracerOffset[2];
        XModel* model;
        XModel* viewModel;
        XModel* deathModel;
        XModel* enemyModel;
        float modelSwapDelay;
        FxEffectDef* exhaustFx;
        int oneExhaust;
        FxEffectDef* treadFx[32];
        FxEffectDef* deathFx;
        unsigned __int16 deathFxTag;
        const char* deathFxSound;
        FxEffectDef* lightFx[4];
        unsigned __int16 lightFxTag[4];
        FxEffectDef* friendlyLightFx;
        unsigned __int16 friendlyLightFxTag;
        FxEffectDef* enemyLightFx;
        unsigned __int16 enemyLightFxTag;
        float radiusDamageMin;
        float radiusDamageMax;
        float radiusDamageRadius;
        const char* shootShock;
        const char* shootRumble;
        float deathQuakeScale;
        float deathQuakeDuration;
        float deathQuakeRadius;
        const char* rumbleType;
        float rumbleScale;
        float rumbleDuration;
        float rumbleRadius;
        float rumbleBaseTime;
        float rumbleAdditionalTime;
        int healthDefault;
        int healthMin;
        int healthMax;
        int eTeam;
        int boostAccelMultiplier;
        float boostDuration;
        float boostSpeedIncrease;
        int addToCompass;
        int addToCompassEnemy;
        const char* compassIcon;
        Material* compassIconMaterial;
        const char* gasButtonName;
        int gasButton;
        const char* reverseBrakeButtonName;
        int reverseBrakeButton;
        const char* handBrakeButtonName;
        int handBrakeButton;
        const char* attackButtonName;
        int attackButton;
        const char* attackSecondaryButtonName;
        int attackSecondaryButton;
        const char* boostButtonName;
        int boostButton;
        const char* moveUpButtonName;
        int moveUpButton;
        const char* moveDownButtonName;
        int moveDownButton;
        const char* switchSeatButtonName;
        int switchSeatButton;
        const char* steerGraphName;
        GraphFloat* steerGraph;
        const char* accelGraphName;
        GraphFloat* accelGraph;
        int isNitrous;
        int isFourWheelSteering;
        int useCollmap;
        float radius;
        float minHeight;
        float maxHeight;
        float max_fric_tilt_angle;
        float max_fric_tilt;
        int noDirectionalDamage;
        int fakeBodyStabilizer;
        float vehHelicopterBoundsRadius;
        float vehHelicopterDecelerationFwd;
        float vehHelicopterDecelerationSide;
        float vehHelicopterDecelerationUp;
        float vehHelicopterTiltFromControllerAxes;
        float vehHelicopterTiltFromFwdAndYaw;
        float vehHelicopterTiltFromFwdAndYaw_VelAtMaxTilt;
        float vehHelicopterTiltMomentum;
        int vehHelicopterQuadRotor;
        int vehHelicopterAccelTwardsView;
        float maxRotorArmMovementAngle;
        float maxRotorArmRotationAngle;
        int vehHelicopterMaintainHeight;
        int vehHelicopterMaintainMaxHeight;
        float vehHelicopterMaintainHeightLimit;
        float vehHelicopterMaintainHeightAccel;
        float vehHelicopterMaintainHeightMinimum;
        float vehHelicopterMaintainHeightMaximum;
        float vehHelicopterMaintainCeilingMinimum;
        int joltVehicle;
        int joltVehicleDriver;
        float joltMaxTime;
        float joltTime;
        float joltWaves;
        float joltIntensity;
        VehicleParameter nitrousVehParams;
        float driveBySoundRadius[2];
        VehicleDriveBySound driveBySounds[40];
        int doFootSteps;
        int isSentient;
        VehicleEngine engine;
        VehicleAntenna antenna[2];
        char* csvInclude;
        float customFloat0;
        float customFloat1;
        float customFloat2;
        int customBool0;
        int customBool1;
        int customBool2;
    };


    struct MemoryBlock
    {
        const char* name;
        bool mainMem;
        bool videoMem;
        bool streamMem;
        unsigned int size;
        unsigned int alignment;
        char* data;
    };

    struct cmodel_t2
    {
        vec3_t mins;
        vec3_t maxs;
        float radius;
        ClipInfo* info;
        cLeaf_s leaf;
    };


    struct AddonMapEnts
    {
        const char* name;
        char* entityString;
        int numEntityChars;
        MapTriggers trigger;
        ClipInfo* info;
        unsigned int numSubModels;
        cmodel_t2* cmodels;
        GfxBrushModel* models;
    };


    enum tracerType_t
    {
        TRACERTYPE_LASER = 0x0,
        TRACERTYPE_SMOKE = 0x1,
        TRACERTYPE_NUM = 0x2,
    };


    struct TracerDef
    {
        const char* name;
        tracerType_t type;
        Material* material;
        unsigned int drawInterval;
        float speed;
        float beamLength;
        float beamWidth;
        float screwRadius;
        float screwDist;
        float fadeTime;
        float fadeScale;
        float texRepeatRate;
        vec4_t colors[5];
    };


    struct SkinnedVertsDef
    {
        const char* name;
        unsigned int maxSkinnedVerts;
    };


    struct Qdb
    {
        const char* name;
        int len;
        byte32* buffer;
    };


    struct Slug
    {
        const char* name;
        int len;
        byte32* buffer;
    };


    struct FootstepTableDef
    {
        const char* name;
        unsigned int sndAliasTable[32][7];
    };


    struct FootstepFXTableDef
    {
        const char* name;
        FxEffectDef* footstepFX[32];
    };


    struct ZBarrierBoard
    {
        XModel* pBoardModel;
        XModel* pAlternateBoardModel;
        XModel* pUpgradedBoardModel;
        const char* pTearAnim;
        const char* pBoardAnim;
        FxEffectDef* repairEffect1;
        FxEffectDef* repairEffect2;
        vec3_t repairEffect1Offset;
        vec3_t repairEffect2Offset;
        unsigned int boardRepairSound;
        unsigned int boardRepairHoverSound;
        unsigned int pauseAndRepeatRepSound;
        float minPause;
        float maxPause;
        unsigned __int16 zombieBoardTearStateName;
        unsigned __int16 zombieBoardTearSubStateName;
        unsigned int numRepsToPullProBoard;
    };


    struct ZBarrierDef
    {
        const char* name;
        unsigned int generalRepairSound1;
        unsigned int generalRepairSound2;
        unsigned int upgradedGeneralRepairSound1;
        unsigned int upgradedGeneralRepairSound2;
        unsigned int delayBetweenRepSounds;
        float delayBetweenRepSoundsDuration;
        unsigned int earthquakeOnRepair;
        float earthquakeMinScale;
        float earthquakeMaxScale;
        float earthquakeMinDuration;
        float earthquakeMaxDuration;
        float earthquakeRadius;
        int numBoardsInBarrier;
        unsigned int autoHideOpenPieces;
        unsigned int taunts;
        unsigned int reachThroughAttacks;
        unsigned __int16 zombieTauntAnimState;
        unsigned __int16 zombieReachThroughAnimState;
        int numAttackSlots;
        float attackSpotHorzOffset;
        ZBarrierBoard boards[6];
    };


    struct XModelPiece
    {
        XModel* model;
        vec3_t offset;
    };


    struct DestructibleStage
    {
        unsigned __int16 showBone;
        float breakHealth;
        float maxTime;
        unsigned int flags;
        FxEffectDef* breakEffect;
        const char* breakSound;
        const char* breakNotify;
        const char* loopSound;
        XModel* spawnModel[3];
        PhysPreset* physPreset;
    };


    struct DestructiblePiece
    {
        DestructibleStage stages[5];
        char parentPiece;
        float parentDamagePercent;
        float bulletDamageScale;
        float explosiveDamageScale;
        float meleeDamageScale;
        float impactDamageScale;
        float entityDamageTransfer;
        PhysConstraints* physConstraints;
        int health;
        const char* damageSound;
        FxEffectDef* burnEffect;
        const char* burnSound;
        unsigned __int16 enableLabel;
        int hideBones[5];
    };


    struct XAnimNotifyInfo
    {
        unsigned __int16 name;
        float time;
    };


    struct XAnimDeltaPart
    {
        XAnimPartTrans* trans;
        XAnimDeltaPartQuat2* quat2;
        XAnimDeltaPartQuat* quat;
    };


    struct DObjAnimMat
    {
        vec4_t quat;
        vec3_t trans;
        float transWeight;
    };


    struct XSurfaceVertexInfo
    {
        __int16 vertCount[4];
        unsigned __int16* vertsBlend;
        float* tensionData;
    };

    typedef __declspec(align(16)) unsigned short r_index16_t;


    struct __declspec(align(16)) XSurface
    {
        char tileMode;
        unsigned char vertListCount;
        unsigned __int16 flags;
        unsigned __int16 vertCount;
        unsigned __int16 triCount;
        unsigned __int16 baseVertIndex;
        r_index16_t (*triIndices)[3];
        XSurfaceVertexInfo vertInfo;
        GfxPackedVertex* verts0;
        ID3D11Buffer* vb0;
        XRigidVertList* vertList;
        ID3D11Buffer* indexBuffer;
        int partBits[5];
    };


    struct XModelCollSurf_s
    {
        XModelCollTri_s* collTris;
        int numCollTris;
        vec3_t mins;
        vec3_t maxs;
        int boneIdx;
        int contents;
        int surfFlags;
    };


    struct __declspec(align(4)) XBoneInfo
    {
        vec3_t bounds[2];
        vec3_t offset;
        float radiusSquared;
        char collmap;
    };


    struct Collmap
    {
        PhysGeomList* geomList;
    };


    struct MaterialTextureDef
    {
        unsigned int nameHash;
        char nameStart;
        char nameEnd;
        char samplerState;
        char semantic;
        char isMatureContent;
        char pad[3];
        GfxImage* image;
    };


    struct __declspec(align(16)) MaterialConstantDef
    {
        unsigned int nameHash;
        char name[12];
        vec4_t literal;
    };


    struct GfxStateBits
    {
        unsigned int loadBits[2];
        ID3D11BlendState* blendState;
        ID3D11DepthStencilState* depthStencilState;
        ID3D11RasterizerState* rasterizerState;
    };

    /* struct IUnknown
    {
      IUnknownVtbl *vfptr;
    };*/

    /* struct __cppobj ID3D11DeviceChild : IUnknown
    {
    };*/

    /* struct __cppobj ID3D11PixelShader : ID3D11DeviceChild
    {
    };*/

    /* struct __cppobj ID3D11VertexShader : ID3D11DeviceChild
    {
    };*/


    struct MaterialPass
    {
        MaterialVertexDeclaration* vertexDecl;
        MaterialVertexShader* vertexShader;
        MaterialPixelShader* pixelShader;
        char perPrimArgCount;
        char perObjArgCount;
        char stableArgCount;
        char customSamplerFlags;
        char precompiledIndex;
        char materialType;
        MaterialShaderArgument* args;
    };


    struct MaterialTechnique
    {
        const char* name;
        unsigned __int16 flags;
        unsigned __int16 passCount;
        MaterialPass passArray[1];
    };

    /* struct __cppobj ID3D11View : ID3D11DeviceChild
    {
    };*/

    /* struct __cppobj ID3D11ShaderResourceView : ID3D11View
    {
    };*/


    struct __declspec(align(4)) GfxImageLoadDef
    {
        char levelCount;
        char flags;
        int format;
        int resourceSize;
        char data[1];
    };


    struct SndAliasList
    {
        const char* name;
        unsigned int id;
        SndAlias* head;
        int count;
        int sequence;
    };


    struct __declspec(align(4)) SndIndexEntry
    {
        unsigned __int16 value;
        unsigned __int16 next;
    };


    struct SndRadverb
    {
        char name[32];
        unsigned int id;
        float smoothing;
        float earlyTime;
        float lateTime;
        float earlyGain;
        float lateGain;
        float returnGain;
        float earlyLpf;
        float lateLpf;
        float inputLpf;
        float dampLpf;
        float wallReflect;
        float dryGain;
        float earlySize;
        float lateSize;
        float diffusion;
        float returnHighpass;
    };

    typedef __declspec(align(16)) float SndFloatAlign16;


    struct SndDuck
    {
        char name[32];
        unsigned int id;
        float fadeIn;
        float fadeOut;
        float startDelay;
        float distance;
        float length;
        unsigned int fadeInCurve;
        unsigned int fadeOutCurve;
        SndFloatAlign16* attenuation;
        SndFloatAlign16* filter;
        int updateWhilePaused;
    };


    struct SndAssetBankEntry
    {
        unsigned int id;
        unsigned int size;
        unsigned int offset;
        unsigned int frameCount;
        char frameRateIndex;
        char channelCount;
        char looping;
        char format;
    };


    struct SndDialogScriptIdLookup
    {
        unsigned int scriptId;
        unsigned int aliasId;
    };


    struct cplane_s
    {
        vec3_t normal;
        float dist;
        char type;
        char signbits;
        char pad[2];
    };


    struct ClipMaterial
    {
        const char* name;
        int surfaceFlags;
        int contentFlags;
    };


    struct cbrushside_t
    {
        cplane_s* plane;
        int cflags;
        int sflags;
    };


    struct cLeafBrushNodeLeaf_t
    {
        LeafBrush* brushes;
    };


    struct cLeafBrushNodeChildren_t
    {
        float dist;
        float range;
        unsigned __int16 childOffset[2];
    };


    union cLeafBrushNodeData_t
    {
        cLeafBrushNodeLeaf_t leaf;
        cLeafBrushNodeChildren_t children;
    };


    struct cLeafBrushNode_s
    {
        char axis;
        __int16 leafBrushCount;
        int contents;
        cLeafBrushNodeData_t data;
    };


    struct __declspec(align(16)) cbrush_t
    {
        vec3_t mins;
        int contents;
        vec3_t maxs;
        unsigned int numsides;
        cbrushside_t* sides;
        int axial_cflags[2][3];
        int axial_sflags[2][3];
        unsigned int numverts;
        vec3_t* verts;
    };


    struct Bounds
    {
        vec3_t midPoint;
        vec3_t halfSize;
    };


    struct cStaticModelWritable
    {
        unsigned __int16 nextModelInWorldSector;
    };


    struct cStaticModel_s
    {
        cStaticModelWritable writable;
        XModel* xmodel;
        int contents;
        vec3_t origin;
        vec3_t invScaledAxis[3];
        vec3_t absmin;
        vec3_t absmax;
    };


    struct cNode_t
    {
        cplane_s* plane;
        __int16 children[2];
    };


    const struct CollisionPartition
    {
        char triCount;
        int firstTri;
        int nuinds;
        int fuind;
    };


    union CollisionAabbTreeIndex
    {
        int firstChildIndex;
        int partitionIndex;
    };


    struct __declspec(align(16)) CollisionAabbTree
    {
        vec3_t origin;
        unsigned __int16 materialIndex;
        unsigned __int16 childCount;
        vec3_t halfSize;
        CollisionAabbTreeIndex u;
    };


    enum DynEntityType
    {
        DYNENT_TYPE_INVALID = 0x0,
        DYNENT_TYPE_CLUTTER = 0x1,
        DYNENT_TYPE_DESTRUCT = 0x2,
        DYNENT_TYPE_COUNT = 0x3,
    };


    struct GfxPlacement
    {
        vec4_t quat;
        vec3_t origin;
    };


    struct DynEntityDef
    {
        DynEntityType type;
        GfxPlacement pose;
        XModel* xModel;
        XModel* destroyedxModel;
        unsigned __int16 brushModel;
        unsigned __int16 physicsBrushModel;
        FxEffectDef* destroyFx;
        unsigned int destroySound;
        XModelPieces* destroyPieces;
        PhysPreset* physPreset;
        __int16 physConstraints[4];
        int health;
        int flags;
        int contents;
        unsigned __int16 targetname;
        unsigned __int16 target;
    };


    struct DynEntityPose
    {
        GfxPlacement pose;
        float radius;
    };


    struct DynEntityClient
    {
        int physObjId;
        unsigned __int16 flags;
        unsigned __int16 lightingHandle;
        int health;
        unsigned __int16 burnTime;
        unsigned __int16 fadeTime;
        int physicsStartTime;
    };


    struct DynEntityServer
    {
        unsigned __int16 flags;
        int health;
    };


    struct DynEntityColl
    {
        unsigned __int16 sector;
        unsigned __int16 nextEntInSector;
        vec3_t linkMins;
        vec3_t linkMaxs;
        int contents;
    };


    struct par_t
    {
        vec3_t p;
        vec3_t p0;
        vec3_t p_prev;
        int flags;
    };


    enum rope_constraint_e
    {
        ROPE_PAIR_CONSTRAINT = 0x0,
        ROPE_WORLD_CONSTRAINT = 0x1,
        ROPE_DENTITY_CONSTRAINT = 0x2,
        ROPE_CENTITY_CONSTRAINT = 0x3,
    };


    struct __declspec(align(4)) constraint_t
    {
        vec3_t p;
        rope_constraint_e type;
        int entity_index;
        int bone_name_hash;
        char pi1;
        char pi2;
    };


    struct rope_frame_verts_t
    {
        int num_verts;
        vec3_t v[50];
    };


    struct rope_client_verts_t
    {
        rope_frame_verts_t frame_verts[2];
        unsigned int frame_index;
    };


    struct __declspec(align(4)) rope_t
    {
        par_t m_particles[25];
        constraint_t m_constraints[30];
        int m_entity_anchors[3];
        int m_num_particles;
        int m_num_constraints;
        int m_num_entity_anchors;
        int m_num_draw_verts;
        rope_client_verts_t m_client_verts;
        vec3_t m_min;
        vec3_t m_max;
        vec3_t m_start;
        vec3_t m_end;
        int m_in_use;
        int m_visible;
        int m_dist_constraint;
        int m_flags;
        Material* m_material;
        float m_seglen;
        float m_length;
        float m_width;
        float m_scale;
        float m_force_scale;
        int m_health;
        int m_frame;
        int m_stable_count;
        int m_static_rope;
        unsigned __int16 m_lightingHandle;
    };


    struct ComPrimaryLight
    {
        char type;
        char canUseShadowMap;
        char exponent;
        char priority;
        __int16 cullDist;
        char useCookie;
        char shadowmapVolume;
        vec3_t color;
        vec3_t dir;
        vec3_t origin;
        float radius;
        float cosHalfFovOuter;
        float cosHalfFovInner;
        float cosHalfFovExpanded;
        float rotationLimit;
        float translationLimit;
        float mipDistance;
        float dAttenuation;
        float roundness;
        vec4_t diffuseColor;
        vec4_t falloff;
        vec4_t angle;
        vec4_t aAbB;
        vec4_t cookieControl0;
        vec4_t cookieControl1;
        vec4_t cookieControl2;
        const char* defName;
    };


    enum nodeType
    {
        NODE_BADNODE = 0x0,
        NODE_PATHNODE = 0x1,
        NODE_COVER_STAND = 0x2,
        NODE_COVER_CROUCH = 0x3,
        NODE_COVER_CROUCH_WINDOW = 0x4,
        NODE_COVER_PRONE = 0x5,
        NODE_COVER_RIGHT = 0x6,
        NODE_COVER_LEFT = 0x7,
        NODE_COVER_PILLAR = 0x8,
        NODE_AMBUSH = 0x9,
        NODE_EXPOSED = 0xA,
        NODE_CONCEALMENT_STAND = 0xB,
        NODE_CONCEALMENT_CROUCH = 0xC,
        NODE_CONCEALMENT_PRONE = 0xD,
        NODE_REACQUIRE = 0xE,
        NODE_BALCONY = 0xF,
        NODE_SCRIPTED = 0x10,
        NODE_NEGOTIATION_BEGIN = 0x11,
        NODE_NEGOTIATION_END = 0x12,
        NODE_TURRET = 0x13,
        NODE_GUARD = 0x14,
        NODE_NUMTYPES = 0x15,
        NODE_DONTLINK = 0x15,
    };


    struct pathnode_constant_t
    {
        nodeType type;
        int spawnflags;
        unsigned __int16 targetname;
        unsigned __int16 script_linkName;
        unsigned __int16 script_noteworthy;
        unsigned __int16 target;
        unsigned __int16 animscript;
        int animscriptfunc;
        vec3_t vOrigin;
        float fAngle;
        vec2_t forward;
        float fRadius;
        float minUseDistSq;
        __int16 wOverlapNode[2];
        unsigned __int16 totalLinkCount;
        pathlink_s* Links;
    };


    struct SentientHandle
    {
        unsigned __int16 number;
        unsigned __int16 infoIndex;
    };


    struct __declspec(align(4)) pathnode_dynamic_t
    {
        SentientHandle pOwner;
        int iFreeTime;
        int iValidTime[3];
        int dangerousNodeTime[3];
        int inPlayerLOSTime;
        __int16 wLinkCount;
        __int16 wOverlapCount;
        __int16 turretEntNumber;
        __int16 userCount;
        bool hasBadPlaceLink;
    };


    struct pathnode_transient_t
    {
        int iSearchFrame;
        pathnode_t* pNextOpen;
        pathnode_t* pPrevOpen;
        pathnode_t* pParent;
        float fCost;
        float fHeuristic;

        union
        {
            float nodeCost;
            int linkIndex;
        };
    };


    struct pathnode_t
    {
        pathnode_constant_t constant;
        pathnode_dynamic_t dynamic;
        pathnode_transient_t transient;
    };


    struct __declspec(align(16)) pathbasenode_t
    {
        vec3_t vOrigin;
        unsigned int type;
    };


    struct pathnode_tree_nodes_t
    {
        int nodeCount;
        unsigned __int16* nodes;
    };


    union pathnode_tree_info_t
    {
        pathnode_tree_t* child[2];
        pathnode_tree_nodes_t s;
    };


    struct pathnode_tree_t
    {
        int axis;
        float dist;
        pathnode_tree_info_t u;
    };


    struct TriggerModel
    {
        int contents;
        unsigned __int16 hullCount;
        unsigned __int16 firstHull;
    };


    struct TriggerHull
    {
        Bounds bounds;
        int contents;
        unsigned __int16 slabCount;
        unsigned __int16 firstSlab;
    };


    struct TriggerSlab
    {
        vec3_t dir;
        float midPoint;
        float halfSize;
    };


    struct __declspec(align(16)) GfxStreamingAabbTree
    {
        vec4_t mins;
        vec4_t maxs;
        float maxStreamingDistance;
        unsigned __int16 firstItem;
        unsigned __int16 itemCount;
        unsigned __int16 firstChild;
        unsigned __int16 childCount;
        unsigned __int16 smodelCount;
        unsigned __int16 surfaceCount;
    };


    struct __declspec(align(16)) float44
    {
        union
        {
            vec4_t m[4];
            float member[16];
        };
    };


    struct __declspec(align(16)) GfxLight
    {
        char type;
        char canUseShadowMap;
        char shadowmapVolume;
        __int16 cullDist;
        vec3_t color;
        vec3_t dir;
        vec3_t origin;
        float radius;
        float cosHalfFovOuter;
        float cosHalfFovInner;
        int exponent;
        unsigned int spotShadowIndex;
        float dAttenuation;
        float roundness;
        vec3_t angles;
        float spotShadowHiDistance;
        vec4_t diffuseColor;
        vec4_t shadowColor;
        vec4_t falloff;
        vec4_t aAbB;
        vec4_t cookieControl0;
        vec4_t cookieControl1;
        vec4_t cookieControl2;
        float44 viewMatrix;
        float44 projMatrix;
        GfxLightDef* def;
    };


    struct GfxLightCorona
    {
        vec3_t origin;
        float radius;
        vec3_t color;
        float intensity;
    };


    struct GfxShadowMapVolume
    {
        unsigned int control;
        unsigned int padding1;
        unsigned int padding2;
        unsigned int padding3;
    };


    struct GfxVolumePlane
    {
        vec4_t plane;
    };


    struct GfxExposureVolume
    {
        unsigned int control;
        float exposure;
        float luminanceIncreaseScale;
        float luminanceDecreaseScale;
        float featherRange;
        float featherAdjust;
    };


    struct GfxWorldFogVolume
    {
        vec3_t mins;
        unsigned int control;
        vec3_t maxs;
        float fogTransitionTime;
        unsigned int controlEx;
        GfxWorldFog volumeWorldFog[1];
    };


    struct GfxWorldFogModifierVolume
    {
        unsigned int control;
        unsigned __int16 minX;
        unsigned __int16 minY;
        unsigned __int16 minZ;
        unsigned __int16 maxX;
        unsigned __int16 maxY;
        unsigned __int16 maxZ;
        unsigned int controlEx;
        float transitionTime;
        float depthScale;
        float heightScale;
        vec4_t colorAdjust;
    };


    struct GfxLutVolume
    {
        vec3_t mins;
        unsigned int control;
        vec3_t maxs;
        float lutTransitionTime;
        unsigned int lutIndex;
    };


    struct GfxCell
    {
        vec3_t mins;
        vec3_t maxs;
        int aabbTreeCount;
        GfxAabbTree* aabbTree;
        int portalCount;
        GfxPortal* portals;
        char reflectionProbeCount;
        char* reflectionProbes;
    };


    struct GfxLightingSH
    {
        vec4_t V0;
        vec4_t V1;
        vec4_t V2;
    };


    struct GfxReflectionProbe
    {
        vec3_t origin;
        GfxLightingSH lightingSH;
        GfxImage* reflectionImage;
        GfxReflectionProbeVolumeData* probeVolumes;
        unsigned int probeVolumeCount;
        float mipLodBias;
    };


    struct GfxLightmapArray
    {
        GfxImage* primary;
        GfxImage* secondary;
    };

    /* struct __cppobj ID3D11Resource : ID3D11DeviceChild
    {
    };*/

    /* struct __cppobj ID3D11Buffer : ID3D11Resource
    {
    };*/


    struct __declspec(align(4)) GfxLightGridEntry
    {
        unsigned __int16 colorsIndex;
        char primaryLightIndex;
        char visibility;
    };


    struct __declspec(align(4)) GfxCompressedLightGridColors
    {
        char rgb[56][3];
    };


    struct GfxCompressedLightGridCoeffs
    {
        unsigned __int16 coeffs[9][3];
    };


    struct GfxSkyGridVolume
    {
        vec3_t mins;
        vec3_t maxs;
        vec3_t lightingOrigin;
        unsigned __int16 colorsIndex;
        char primaryLightIndex;
        char visibility;
    };


    struct GfxBrushModelWritable
    {
        vec3_t mins;
        float padding1;
        vec3_t maxs;
        float padding2;
    };


    struct __declspec(align(16)) GfxBrushModel
    {
        GfxBrushModelWritable writable;
        vec3_t bounds[2];
        unsigned int surfaceCount;
        unsigned int startSurfIndex;
    };


    struct MaterialMemory
    {
        Material* material;
        int memory;
    };


    union XModelDrawInfo
    {
        struct
        {
            char state;
            char lod;
            unsigned __int16 surfId;
        };

        unsigned int packed;
    };


    struct GfxSceneDynModel
    {
        XModelDrawInfo info;
        unsigned __int16 dynEntId;
        char primaryLightIndex;
        char reflectionProbeIndex;
    };


    struct BModelDrawInfo
    {
        unsigned __int16 surfId;
    };


    struct __declspec(align(4)) GfxSceneDynBrush
    {
        BModelDrawInfo info;
        unsigned __int16 dynEntId;
    };


    union __m128
    {
        float m128_f32[4];
        unsigned __int64 m128_u64[2];
        char m128_i8[16];
        __int16 m128_i16[8];
        int m128_i32[4];
        __int64 m128_i64[2];
        char m128_u8[16];
        unsigned __int16 m128_u16[8];
        unsigned int m128_u32[4];
    };


    struct vector3
    {
        __m128 x;
        __m128 y;
        __m128 z;
    };


    struct vector4 : vector3
    {
        __m128 w;
    };


    struct __declspec(align(16)) SSkinInstance
    {
        union
        {
            vector4 mat;
            float disk_mat[16];
        };

        SSkinShaders* shaders;
        SSkinModel* model;
        SSkinAnim* anim;
        SSkinVert* instVerts;
        float frame;
        int pad1;
        int pad2;
        int pad3;
    };


    struct GfxShadowGeometry
    {
        unsigned __int16 surfaceCount;
        unsigned __int16 smodelCount;
        unsigned __int16* sortedSurfIndex;
        unsigned __int16* smodelIndex;
    };


    struct GfxLightRegion
    {
        unsigned int hullCount;
        GfxLightRegionHull* hulls;
    };


    struct GfxStaticModelInst
    {
        vec3_t mins;
        vec3_t maxs;
        vec3_t lightingOrigin;
    };


    struct srfTriangles_t
    {
        vec3_t mins;
        int vertexDataOffset0;
        vec3_t maxs;
        int vertexDataOffset1;
        int firstVertex;
        float himipRadiusInvSq;
        unsigned __int16 vertexCount;
        unsigned __int16 triCount;
        int baseIndex;
    };


    struct __declspec(align(16)) GfxSurface
    {
        srfTriangles_t tris;
        Material* material;
        char lightmapIndex;
        char reflectionProbeIndex;
        char primaryLightIndex;
        char flags;
        vec3_t bounds[2];
    };


    struct GfxPackedPlacement
    {
        vec3_t origin;
        vec3_t axis[3];
        float scale;
    };


    struct GfxLightingSHQuantized
    {
        unsigned __int16 V0[4];
        unsigned __int16 V1[4];
        unsigned __int16 V2[4];
    };


    struct __declspec(align(4)) GfxStaticModelLmapVertexInfo
    {
        unsigned int* lmapVertexColors;
        ID3D11Buffer* lmapVertexColorsVB;
        unsigned __int16 numLmapVertexColors;
    };


    struct GfxStaticModelDrawInst
    {
        float cullDist;
        GfxPackedPlacement placement;
        XModel* model;
        int flags;
        float invScaleSq;
        unsigned __int16 lightingHandle;
        unsigned __int16 colorsIndex;
        GfxLightingSHQuantized lightingSH;
        char primaryLightIndex;
        char visibility;
        char reflectionProbeIndex;
        unsigned int smid;
        GfxStaticModelLmapVertexInfo lmapVertexInfo[4];
    };


    struct Occluder
    {
        unsigned int flags;
        char name[16];
        vec3_t points[4];
    };


    struct GfxOutdoorBounds
    {
        vec3_t bounds[2];
    };


    struct GfxHeroLight
    {
        char type;
        char unused[3];
        vec3_t color;
        vec3_t dir;
        vec3_t origin;
        float radius;
        float cosHalfFovOuter;
        float cosHalfFovInner;
        int exponent;
    };


    struct GfxHeroLightTree
    {
        vec3_t mins;
        vec3_t maxs;
        int leftNode;
        int rightNode;
    };


    struct Glyph
    {
        unsigned __int16 letter;
        char x0;
        char y0;
        char dx;
        char pixelWidth;
        char pixelHeight;
        float s0;
        float t0;
        float s1;
        float t1;
    };


    struct KerningPairs
    {
        unsigned __int16 wFirst;
        unsigned __int16 wSecond;
        int iKernAmount;
    };


    struct FontIconName
    {
        const char* string;
        int hash;
    };


    struct FontIconEntry
    {
        FontIconName fontIconName;
        Material* fontIconMaterialHandle;
        int fontIconSize;
        float xScale;
        float yScale;
    };


    struct FontIconAlias
    {
        int aliasHash;
        int buttonHash;
    };


    struct GenericEventHandler
    {
        const char* name;
        GenericEventScript* eventScript;
        GenericEventHandler* next;
    };


    struct ItemKeyHandler
    {
        int key;
        GenericEventScript* keyScript;
        ItemKeyHandler* next;
    };


    enum expDataType
    {
        VAL_INT = 0x0,
        VAL_FLOAT = 0x1,
        VAL_STRING = 0x2,
        VAL_ADDRESS = 0x3,
        VAL_DVAR = 0x4,
    };


    union operandInternalDataUnion
    {
        int intVal;
        float floatVal;
        const char* string;
        dvar_t* dvar;
    };


    struct Operand
    {
        expDataType dataType;
        operandInternalDataUnion internals;
    };


    union expressionRpnDataUnion
    {
        Operand constant;
        void* cmd;
        int cmdIdx;
    };

    enum expressionRpnEnum
    {
        RPN_CONSTANT = 0x0,
        RPN_CMD_IDX = 0x1,
        RPN_CMD = 0x2,
        RPN_END = 0x3,
    };


    struct expressionRpn
    {
        int type;
        expressionRpnDataUnion data;
    };

    enum ItemType
    {
        // ITEM_TYPE_XYZ = 1, // ? some kind of read only text field
        ITEM_TYPE_IMAGE = 2,
        // Confirmed
        // ITEM_TYPE_XYZ = 3, // ? some kind of read only text field
        ITEM_TYPE_LISTBOX = 4,
        // Confirmed
        ITEM_TYPE_EDITFIELD = 5,
        // editable text field
        ITEM_TYPE_OWNERDRAW = 6,
        // Confirmed
        ITEM_TYPE_NUMERICFIELD = 7,
        // editable text field
        ITEM_TYPE_SLIDER = 8,
        // Confirmed
        ITEM_TYPE_YESNO = 9,
        // Confirmed
        ITEM_TYPE_MULTI = 10,
        // Confirmed
        ITEM_TYPE_DVARENUM = 11,
        // Confirmed
        ITEM_TYPE_BIND_PRIMARY = 12,
        // Confirmed
        ITEM_TYPE_NAMEFIELD = 13,
        // editable text field
        ITEM_TYPE_UPPERTEXTFIELD = 14,
        // editable text field
        ITEM_TYPE_GAME_MESSAGE_WINDOW = 15,
        // Confirmed
        ITEM_TYPE_BIND_SECONDARY = 16,
        // Confirmed
        ITEM_TYPE_PROFILEMULTI = 22,
        // Confirmed
        ITEM_TYPE_DVAR_FLOAT = 30,
        // editable text field
    };


    union itemDefData_t
    {
        textDef_s* textDef;
        imageDef_s* imageDef;
        focusItemDef_s* blankButtonDef;
        ownerDrawDef_s* ownerDrawDef;
        void* data;
    };


    struct __declspec(align(8)) itemDef_s
    {
        windowDef_t window;
        int type;
        int dataType;
        int imageTrack;
        const char* dvar;
        const char* profileVar;
        const char* dvarTest;
        const char* enableDvar;
        int dvarFlags;
        itemDefData_t typeData;
        menuDef_t* parent;
        rectData_s* rectExpData;
        ExpressionStatement visibleExp;
        unsigned __int64 showBits;
        unsigned __int64 hideBits;
        ExpressionStatement forecolorAExp;
        int ui3dWindowId;
        GenericEventHandler* onEvent;
        UIAnimInfo* animInfo;
    };


    enum weapType_t
    {
        WEAPTYPE_BULLET = 0x0,
        WEAPTYPE_GRENADE = 0x1,
        WEAPTYPE_PROJECTILE = 0x2,
        WEAPTYPE_BINOCULARS = 0x3,
        WEAPTYPE_GAS = 0x4,
        WEAPTYPE_BOMB = 0x5,
        WEAPTYPE_MINE = 0x6,
        WEAPTYPE_MELEE = 0x7,
        WEAPTYPE_RIOTSHIELD = 0x8,
        WEAPTYPE_NUM = 0x9,
    };


    enum weapClass_t
    {
        WEAPCLASS_RIFLE = 0x0,
        WEAPCLASS_MG = 0x1,
        WEAPCLASS_SMG = 0x2,
        WEAPCLASS_SPREAD = 0x3,
        WEAPCLASS_PISTOL = 0x4,
        WEAPCLASS_GRENADE = 0x5,
        WEAPCLASS_ROCKETLAUNCHER = 0x6,
        WEAPCLASS_TURRET = 0x7,
        WEAPCLASS_NON_PLAYER = 0x8,
        WEAPCLASS_GAS = 0x9,
        WEAPCLASS_ITEM = 0xA,
        WEAPCLASS_MELEE = 0xB,
        WEAPCLASS_KILLSTREAK_ALT_STORED_WEAPON = 0xC,
        WEAPCLASS_PISTOL_SPREAD = 0xD,
        WEAPCLASS_NUM = 0xE,
    };


    enum ImpactType
    {
        IMPACT_TYPE_NONE = 0x0,
        IMPACT_TYPE_BULLET_SMALL = 0x1,
        IMPACT_TYPE_BULLET_LARGE = 0x2,
        IMPACT_TYPE_BULLET_AP = 0x3,
        IMPACT_TYPE_BULLET_XTREME = 0x4,
        IMPACT_TYPE_SHOTGUN = 0x5,
        IMPACT_TYPE_GRENADE_BOUNCE = 0x6,
        IMPACT_TYPE_GRENADE_EXPLODE = 0x7,
        IMPACT_TYPE_RIFLE_GRENADE = 0x8,
        IMPACT_TYPE_ROCKET_EXPLODE = 0x9,
        IMPACT_TYPE_ROCKET_EXPLODE_XTREME = 0xA,
        IMPACT_TYPE_PROJECTILE_DUD = 0xB,
        IMPACT_TYPE_MORTAR_SHELL = 0xC,
        IMPACT_TYPE_TANK_SHELL = 0xD,
        IMPACT_TYPE_BOLT = 0xE,
        IMPACT_TYPE_BLADE = 0xF,
        IMPACT_TYPE_COUNT = 0x10,
    };


    enum weapInventoryType_t
    {
        WEAPINVENTORY_PRIMARY = 0x0,
        WEAPINVENTORY_OFFHAND = 0x1,
        WEAPINVENTORY_ITEM = 0x2,
        WEAPINVENTORY_ALTMODE = 0x3,
        WEAPINVENTORY_MELEE = 0x4,
        WEAPINVENTORY_DWLEFTHAND = 0x5,
        WEAPINVENTORYCOUNT = 0x6,
    };


    enum weapClipType_t
    {
        WEAPON_CLIPTYPE_BOTTOM = 0x0,
        WEAPON_CLIPTYPE_TOP = 0x1,
        WEAPON_CLIPTYPE_LEFT = 0x2,
        WEAPON_CLIPTYPE_DP28 = 0x3,
        WEAPON_CLIPTYPE_PTRS = 0x4,
        WEAPON_CLIPTYPE_LMG = 0x5,
        WEAPON_CLIPTYPECOUNT = 0x6,
    };


    enum barrelType_t
    {
        BARREL_TYPE_SINGLE = 0x0,
        BARREL_TYPE_DUAL = 0x1,
        BARREL_TYPE_DUAL_ALTERNATE = 0x2,
        BARREL_TYPE_QUAD = 0x3,
        BARREL_TYPE_QUAD_ALTERNATE = 0x4,
        BARREL_TYPE_QUAD_DOUBLE_ALTERNATE = 0x5,
        BARREL_TYPE_COUNT = 0x6,
    };


    enum OffhandClass
    {
        OFFHAND_CLASS_NONE = 0x0,
        OFFHAND_CLASS_FRAG_GRENADE = 0x1,
        OFFHAND_CLASS_SMOKE_GRENADE = 0x2,
        OFFHAND_CLASS_FLASH_GRENADE = 0x3,
        OFFHAND_CLASS_GEAR = 0x4,
        OFFHAND_CLASS_SUPPLYDROP_MARKER = 0x5,
        OFFHAND_CLASS_COUNT = 0x6,
    };


    enum OffhandSlot
    {
        OFFHAND_SLOT_NONE = 0x0,
        OFFHAND_SLOT_LETHAL_GRENADE = 0x1,
        OFFHAND_SLOT_TACTICAL_GRENADE = 0x2,
        OFFHAND_SLOT_EQUIPMENT = 0x3,
        OFFHAND_SLOT_SPECIFIC_USE = 0x4,
        OFFHAND_SLOT_COUNT = 0x5,
    };


    enum weapStance_t
    {
        WEAPSTANCE_STAND = 0x0,
        WEAPSTANCE_DUCK = 0x1,
        WEAPSTANCE_PRONE = 0x2,
        WEAPSTANCE_NUM = 0x3,
    };


    enum activeReticleType_t
    {
        VEH_ACTIVE_RETICLE_NONE = 0x0,
        VEH_ACTIVE_RETICLE_PIP_ON_A_STICK = 0x1,
        VEH_ACTIVE_RETICLE_BOUNCING_DIAMOND = 0x2,
        VEH_ACTIVE_RETICLE_MISSILE_LOCK = 0x3,
        VEH_ACTIVE_RETICLE_COUNT = 0x4,
    };


    enum ammoCounterClipType_t
    {
        AMMO_COUNTER_CLIP_NONE = 0x0,
        AMMO_COUNTER_CLIP_MAGAZINE = 0x1,
        AMMO_COUNTER_CLIP_SHORTMAGAZINE = 0x2,
        AMMO_COUNTER_CLIP_SHOTGUN = 0x3,
        AMMO_COUNTER_CLIP_ROCKET = 0x4,
        AMMO_COUNTER_CLIP_BELTFED = 0x5,
        AMMO_COUNTER_CLIP_ALTWEAPON = 0x6,
        AMMO_COUNTER_CLIP_COUNT = 0x7,
    };


    enum WeapOverlayInteface_t
    {
        WEAPOVERLAYINTERFACE_NONE = 0x0,
        WEAPOVERLAYINTERFACE_JAVELIN = 0x1,
        WEAPOVERLAYINTERFACE_TURRETSCOPE = 0x2,
        WEAPOVERLAYINTERFACECOUNT = 0x3,
    };


    enum weapProjExposion_t
    {
        WEAPPROJEXP_GRENADE = 0x0,
        WEAPPROJEXP_ROCKET = 0x1,
        WEAPPROJEXP_FLASHBANG = 0x2,
        WEAPPROJEXP_NONE = 0x3,
        WEAPPROJEXP_DUD = 0x4,
        WEAPPROJEXP_SMOKE = 0x5,
        WEAPPROJEXP_HEAVY = 0x6,
        WEAPPROJEXP_FIRE = 0x7,
        WEAPPROJEXP_NAPALMBLOB = 0x8,
        WEAPPROJEXP_BOLT = 0x9,
        WEAPPROJEXP_SHRAPNELSPAN = 0xA,
        WEAPPROJEXP_NUM = 0xB,
    };


    enum WeapStickinessType
    {
        WEAPSTICKINESS_NONE = 0x0,
        WEAPSTICKINESS_ALL = 0x1,
        WEAPSTICKINESS_ALL_NO_SENTIENTS = 0x2,
        WEAPSTICKINESS_GROUND = 0x3,
        WEAPSTICKINESS_GROUND_WITH_YAW = 0x4,
        WEAPSTICKINESS_FLESH = 0x5,
        WEAPSTICKINESS_COUNT = 0x6,
    };


    enum WeapRotateType
    {
        WEAPROTATE_GRENADE_ROTATE = 0x0,
        WEAPROTATE_BLADE_ROTATE = 0x1,
        WEAPROTATE_CYLINDER_ROTATE = 0x2,
        WEAPROTATE_COUNT = 0x3,
    };


    enum guidedMissileType_t
    {
        MISSILE_GUIDANCE_NONE = 0x0,
        MISSILE_GUIDANCE_SIDEWINDER = 0x1,
        MISSILE_GUIDANCE_HELLFIRE = 0x2,
        MISSILE_GUIDANCE_JAVELIN = 0x3,
        MISSILE_GUIDANCE_BALLISTIC = 0x4,
        MISSILE_GUIDANCE_WIREGUIDED = 0x5,
        MISSILE_GUIDANCE_TVGUIDED = 0x6,
        MISSILE_GUIDANCE_DRONE = 0x7,
        MISSILE_GUIDANCE_HEATSEEKING = 0x8,
        MISSILE_GUIDANCE_COUNT = 0x9,
    };

    enum hitLocation_t
    {
        HITLOC_NONE = 0x0,
        HITLOC_HELMET = 0x1,
        HITLOC_HEAD = 0x2,
        HITLOC_NECK = 0x3,
        HITLOC_TORSO_UPR = 0x4,
        HITLOC_TORSO_MID = 0x5,
        HITLOC_TORSO_LWR = 0x6,
        HITLOC_R_ARM_UPR = 0x7,
        HITLOC_L_ARM_UPR = 0x8,
        HITLOC_R_ARM_LWR = 0x9,
        HITLOC_L_ARM_LWR = 0xA,
        HITLOC_R_HAND = 0xB,
        HITLOC_L_HAND = 0xC,
        HITLOC_R_LEG_UPR = 0xD,
        HITLOC_L_LEG_UPR = 0xE,
        HITLOC_R_LEG_LWR = 0xF,
        HITLOC_L_LEG_LWR = 0x10,
        HITLOC_R_FOOT = 0x11,
        HITLOC_L_FOOT = 0x12,
        HITLOC_GUN = 0x13,
        HITLOC_SHIELD = 0x14,
        HITLOC_NUM = 0x15,
    };

    struct WeaponDef
    {
        const char* szOverlayName; // covered
        XModel** gunXModel; // covered
        XModel* handXModel; // covered
        const char* szModeName; // covered
        unsigned __int16* notetrackSoundMapKeys; // covered
        unsigned __int16* notetrackSoundMapValues; // covered
        int playerAnimType; // covered
        weapType_t weapType;
        weapClass_t weapClass;
        PenetrateType penetrateTWeaponAttachmentype;
        ImpactType impactType;
        weapInventoryType_t inventoryType;
        weapFireType_t fireType;
        weapClipType_t clipType;
        barrelType_t barrelType;
        int itemIndex;
        const char* parentWeaponName;
        int iJamFireTime;
        int overheatWeapon;
        float overheatRate;
        float cooldownRate;
        float overheatEndVal;
        bool coolWhileFiring;
        bool fuelTankWeapon;
        int iTankLifeTime;
        OffhandClass offhandClass;
        OffhandSlot offhandSlot;
        weapStance_t stance;
        FxEffectDef* viewFlashEffect;
        FxEffectDef* worldFlashEffect;
        FxEffectDef* barrelCooldownEffect;
        int barrelCooldownMinCount;
        vec3_t vViewFlashOffset;
        vec3_t vWorldFlashOffset;
        const char* pickupSound;
        const char* pickupSoundPlayer;
        const char* ammoPickupSound;
        const char* ammoPickupSoundPlayer;
        const char* projectileSound;
        const char* pullbackSound;
        const char* pullbackSoundPlayer;
        const char* fireSound;
        const char* fireSoundPlayer;
        const char* fireLoopSound;
        const char* fireLoopSoundPlayer;
        const char* fireLoopEndSound;
        const char* fireLoopEndSoundPlayer;
        const char* fireStartSound;
        const char* fireStopSound;
        const char* fireKillcamSound;
        const char* fireStartSoundPlayer;
        const char* fireStopSoundPlayer;
        const char* fireKillcamSoundPlayer;
        const char* fireLastSound;
        const char* fireLastSoundPlayer;
        const char* emptyFireSound;
        const char* emptyFireSoundPlayer;
        const char* crackSound;
        const char* whizbySound;
        const char* meleeSwipeSound;
        const char* meleeSwipeSoundPlayer;
        const char* meleeHitSound;
        const char* meleeMissSound;
        const char* rechamberSound;
        const char* rechamberSoundPlayer;
        const char* reloadSound;
        const char* reloadSoundPlayer;
        const char* reloadEmptySound;
        const char* reloadEmptySoundPlayer;
        const char* reloadStartSound;
        const char* reloadStartSoundPlayer;
        const char* reloadEndSound;
        const char* reloadEndSoundPlayer;
        const char* rotateLoopSound;
        const char* rotateLoopSoundPlayer;
        const char* rotateStopSound;
        const char* rotateStopSoundPlayer;
        const char* deploySound;
        const char* deploySoundPlayer;
        const char* finishDeploySound;
        const char* finishDeploySoundPlayer;
        const char* breakdownSound;
        const char* breakdownSoundPlayer;
        const char* finishBreakdownSound;
        const char* finishBreakdownSoundPlayer;
        const char* detonateSound;
        const char* detonateSoundPlayer;
        const char* nightVisionWearSound;
        const char* nightVisionWearSoundPlayer;
        const char* nightVisionRemoveSound;
        const char* nightVisionRemoveSoundPlayer;
        const char* altSwitchSound;
        const char* altSwitchSoundPlayer;
        const char* raiseSound;
        const char* raiseSoundPlayer;
        const char* firstRaiseSound;
        const char* firstRaiseSoundPlayer;
        const char* adsRaiseSoundPlayer;
        const char* adsLowerSoundPlayer;
        const char* putawaySound;
        const char* putawaySoundPlayer;
        const char* overheatSound;
        const char* overheatSoundPlayer;
        const char* adsZoomSound;
        const char* shellCasing;
        const char* shellCasingPlayer;
        const char** bounceSound;
        const char* standMountedWeapdef;
        const char* crouchMountedWeapdef;
        const char* proneMountedWeapdef;
        int standMountedIndex;
        int crouchMountedIndex;
        int proneMountedIndex;
        FxEffectDef* viewShellEjectEffect;
        FxEffectDef* worldShellEjectEffect;
        FxEffectDef* viewLastShotEjectEffect;
        FxEffectDef* worldLastShotEjectEffect;
        vec3_t vViewShellEjectOffset;
        vec3_t vWorldShellEjectOffset;
        vec3_t vViewShellEjectRotation;
        vec3_t vWorldShellEjectRotation;
        Material* reticleCenter;
        Material* reticleSide;
        int iReticleCenterSize;
        int iReticleSideSize;
        int iReticleMinOfs;
        activeReticleType_t activeReticleType;
        vec3_t vStandMove;
        vec3_t vStandRot;
        vec3_t vDuckedOfs;
        vec3_t vDuckedMove;
        vec3_t vDuckedSprintOfs;
        vec3_t vDuckedSprintRot;
        vec2_t vDuckedSprintBob;
        float fDuckedSprintCycleScale;
        vec3_t vSprintOfs;
        vec3_t vSprintRot;
        vec2_t vSprintBob;
        float fSprintCycleScale;
        vec3_t vLowReadyOfs;
        vec3_t vLowReadyRot;
        vec3_t vRideOfs;
        vec3_t vRideRot;
        vec3_t vDtpOfs;
        vec3_t vDtpRot;
        vec2_t vDtpBob;
        float fDtpCycleScale;
        vec3_t vMantleOfs;
        vec3_t vMantleRot;
        vec3_t vSlideOfs;
        vec3_t vSlideRot;
        vec3_t vDuckedRot;
        vec3_t vProneOfs;
        vec3_t vProneMove;
        vec3_t vProneRot;
        vec3_t vStrafeMove;
        vec3_t vStrafeRot;
        float fPosMoveRate;
        float fPosProneMoveRate;
        float fStandMoveMinSpeed;
        float fDuckedMoveMinSpeed;
        float fProneMoveMinSpeed;
        float fPosRotRate;
        float fPosProneRotRate;
        float fStandRotMinSpeed;
        float fDuckedRotMinSpeed;
        float fProneRotMinSpeed;
        XModel** worldModel;
        XModel* worldClipModel;
        XModel* rocketModel;
        XModel* mountedModel;
        XModel* additionalMeleeModel;
        Material* fireTypeIcon;
        Material* hudIcon;
        weaponIconRatioType_t hudIconRatio;
        Material* indicatorIcon;
        weaponIconRatioType_t indicatorIconRatio;
        Material* ammoCounterIcon;
        weaponIconRatioType_t ammoCounterIconRatio;
        ammoCounterClipType_t ammoCounterClip;
        int iStartAmmo;
        int iMaxAmmo;
        int shotCount;
        const char* szSharedAmmoCapName;
        int iSharedAmmoCapIndex;
        int iSharedAmmoCap;
        bool unlimitedAmmo;
        bool ammoCountClipRelative;
        int damage[6];
        float damageRange[6];
        int minPlayerDamage;
        float damageDuration;
        float damageInterval;
        int playerDamage;
        int iMeleeDamage;
        int iDamageType;
        unsigned __int16 explosionTag;
        int iFireDelay;
        int iMeleeDelay;
        int meleeChargeDelay;
        int iDetonateDelay;
        int iSpinUpTime;
        int iSpinDownTime;
        float spinRate;
        const char* spinLoopSound;
        const char* spinLoopSoundPlayer;
        const char* startSpinSound;
        const char* startSpinSoundPlayer;
        const char* stopSpinSound;
        const char* stopSpinSoundPlayer;
        bool applySpinPitch;
        int iFireTime;
        int iLastFireTime;
        int iRechamberTime;
        int iRechamberBoltTime;
        int iHoldFireTime;
        int iDetonateTime;
        int iMeleeTime;
        int iBurstDelayTime;
        int meleeChargeTime;
        int iReloadTimeRight;
        int iReloadTimeLeft;
        int reloadShowRocketTime;
        int iReloadEmptyTimeLeft;
        int iReloadAddTime;
        int iReloadEmptyAddTime;
        int iReloadQuickAddTime;
        int iReloadQuickEmptyAddTime;
        int iReloadStartTime;
        int iReloadStartAddTime;
        int iReloadEndTime;
        int iDropTime;
        int iRaiseTime;
        int iAltDropTime;
        int quickDropTime;
        int quickRaiseTime;
        int iFirstRaiseTime;
        int iEmptyRaiseTime;
        int iEmptyDropTime;
        int sprintInTime;
        int sprintLoopTime;
        int sprintOutTime;
        int lowReadyInTime;
        int lowReadyLoopTime;
        int lowReadyOutTime;
        int contFireInTime;
        int contFireLoopTime;
        int contFireOutTime;
        int dtpInTime;
        int dtpLoopTime;
        int dtpOutTime;
        int crawlInTime;
        int crawlForwardTime;
        int crawlBackTime;
        int crawlRightTime;
        int crawlLeftTime;
        int crawlOutFireTime;
        int crawlOutTime;
        int slideInTime;
        int deployTime;
        int breakdownTime;
        int iFlourishTime;
        int nightVisionWearTime;
        int nightVisionWearTimeFadeOutEnd;
        int nightVisionWearTimePowerUp;
        int nightVisionRemoveTime;
        int nightVisionRemoveTimePowerDown;
        int nightVisionRemoveTimeFadeInStart;
        int fuseTime;
        int aiFuseTime;
        int lockOnRadius;
        int lockOnSpeed;
        bool requireLockonToFire;
        bool noAdsWhenMagEmpty;
        bool avoidDropCleanup;
        unsigned int stackFire;
        float stackFireSpread;
        float stackFireAccuracyDecay;
        const char* stackSound;
        float autoAimRange;
        float aimAssistRange;
        bool mountableWeapon;
        float aimPadding;
        float enemyCrosshairRange;
        bool crosshairColorChange;
        float moveSpeedScale;
        float adsMoveSpeedScale;
        float sprintDurationScale;
        weapOverlayReticle_t overlayReticle;
        WeapOverlayInteface_t overlayInterface;
        float overlayWidth;
        float overlayHeight;
        float fAdsBobFactor;
        float fAdsViewBobMult;
        bool bHoldBreathToSteady;
        float fHipSpreadStandMin;
        float fHipSpreadDuckedMin;
        float fHipSpreadProneMin;
        float hipSpreadStandMax;
        float hipSpreadDuckedMax;
        float hipSpreadProneMax;
        float fHipSpreadDecayRate;
        float fHipSpreadFireAdd;
        float fHipSpreadTurnAdd;
        float fHipSpreadMoveAdd;
        float fHipSpreadDuckedDecay;
        float fHipSpreadProneDecay;
        float fHipReticleSidePos;
        float fAdsIdleAmount;
        float fHipIdleAmount;
        float adsIdleSpeed;
        float hipIdleSpeed;
        float fIdleCrouchFactor;
        float fIdleProneFactor;
        float fGunMaxPitch;
        float fGunMaxYaw;
        float swayMaxAngle;
        float swayLerpSpeed;
        float swayPitchScale;
        float swayYawScale;
        float swayHorizScale;
        float swayVertScale;
        float swayShellShockScale;
        float adsSwayMaxAngle;
        float adsSwayLerpSpeed;
        float adsSwayPitchScale;
        float adsSwayYawScale;
        bool sharedAmmo;
        bool bRifleBullet;
        bool armorPiercing;
        bool bAirburstWeapon;
        bool bBoltAction;
        bool bUseAltTagFlash;
        bool bUseAntiLagRewind;
        bool bIsCarriedKillstreakWeapon;
        bool aimDownSight;
        bool bRechamberWhileAds;
        bool bReloadWhileAds;
        float adsViewErrorMin;
        float adsViewErrorMax;
        bool bCookOffHold;
        bool bClipOnly;
        bool bCanUseInVehicle;
        bool bNoDropsOrRaises;
        bool adsFireOnly;
        bool cancelAutoHolsterWhenEmpty;
        bool suppressAmmoReserveDisplay;
        bool laserSight;
        bool laserSightDuringNightvision;
        bool bHideThirdPerson;
        bool bHasBayonet;
        bool bDualWield;
        bool bExplodeOnGround;
        bool bThrowBack;
        bool bRetrievable;
        bool bDieOnRespawn;
        bool bNoThirdPersonDropsOrRaises;
        bool bContinuousFire;
        bool bNoPing;
        bool bForceBounce;
        bool bUseDroppedModelAsStowed;
        bool bNoQuickDropWhenEmpty;
        bool bKeepCrosshairWhenADS;
        bool bUseOnlyAltWeaoponHideTagsInAltMode;
        bool bAltWeaponAdsOnly;
        bool bAltWeaponDisableSwitching;
        Material* killIcon;
        weaponIconRatioType_t killIconRatio;
        bool flipKillIcon;
        bool bNoPartialReload;
        bool bSegmentedReload;
        bool bNoADSAutoReload;
        int iReloadAmmoAdd;
        int iReloadStartAdd;
        const char* szSpawnedGrenadeWeaponName;
        const char* szDualWieldWeaponName;
        unsigned int dualWieldWeaponIndex;
        int iDropAmmoMin;
        int iDropAmmoMax;
        int iDropClipAmmoMin;
        int iDropClipAmmoMax;
        int iShotsBeforeRechamber;
        bool blocksProne;
        bool bShowIndicator;
        int isRollingGrenade;
        int useBallisticPrediction;
        int isValuable;
        int isTacticalInsertion;
        bool isReviveWeapon;
        bool bUseRigidBodyOnVehicle;
        int iExplosionRadius;
        int iExplosionRadiusMin;
        int iIndicatorRadius;
        int iExplosionInnerDamage;
        int iExplosionOuterDamage;
        float damageConeAngle;
        int iProjectileSpeed;
        int iProjectileSpeedUp;
        int iProjectileSpeedRelativeUp;
        int iProjectileSpeedForward;
        float fProjectileTakeParentVelocity;
        int iProjectileActivateDist;
        float projLifetime;
        float timeToAccelerate;
        float projectileCurvature;
        XModel* projectileModel;
        weapProjExposion_t projExplosion;
        FxEffectDef* projExplosionEffect;
        bool projExplosionEffectForceNormalUp;
        FxEffectDef* projExplosionEffect2;
        bool projExplosionEffect2ForceNormalUp;
        FxEffectDef* projExplosionEffect3;
        bool projExplosionEffect3ForceNormalUp;
        FxEffectDef* projExplosionEffect4;
        bool projExplosionEffect4ForceNormalUp;
        FxEffectDef* projExplosionEffect5;
        bool projExplosionEffect5ForceNormalUp;
        FxEffectDef* projDudEffect;
        const char* projExplosionSound;
        const char* projDudSound;
        const char* mortarShellSound;
        const char* tankShellSound;
        bool bProjImpactExplode;
        bool bProjSentientImpactExplode;
        bool bProjExplodeWhenStationary;
        bool bBulletImpactExplode;
        WeapStickinessType stickiness;
        WeapRotateType rotateType;
        bool plantable;
        bool hasDetonator;
        bool timedDetonation;
        bool bNoCrumpleMissile;
        bool rotate;
        bool bKeepRolling;
        bool holdButtonToThrow;
        bool offhandHoldIsCancelable;
        bool freezeMovementWhenFiring;
        float lowAmmoWarningThreshold;
        bool bDisallowAtMatchStart;
        float meleeChargeRange;
        bool bUseAsMelee;
        bool isCameraSensor;
        bool isAcousticSensor;
        bool isLaserSensor;
        bool isHoldUseGrenade;
        float* parallelBounce;
        float* perpendicularBounce;
        FxEffectDef* projTrailEffect;
        vec3_t vProjectileColor;
        guidedMissileType_t guidedMissileType;
        float maxSteeringAccel;
        int projIgnitionDelay;
        FxEffectDef* projIgnitionEffect;
        const char* projIgnitionSound;
        float fAdsAimPitch;
        float fAdsCrosshairInFrac;
        float fAdsCrosshairOutFrac;
        int adsGunKickReducedKickBullets;
        float adsGunKickReducedKickPercent;
        float fAdsGunKickPitchMin;
        float fAdsGunKickPitchMax;
        float fAdsGunKickYawMin;
        float fAdsGunKickYawMax;
        float fAdsGunKickAccel;
        float fAdsGunKickSpeedMax;
        float fAdsGunKickSpeedDecay;
        float fAdsGunKickStaticDecay;
        float fAdsViewKickPitchMin;
        float fAdsViewKickPitchMax;
        float fAdsViewKickMinMagnitude;
        float fAdsViewKickYawMin;
        float fAdsViewKickYawMax;
        float fAdsRecoilReductionRate;
        float fAdsRecoilReductionLimit;
        float fAdsRecoilReturnRate;
        float fAdsViewScatterMin;
        float fAdsViewScatterMax;
        float fAdsSpread;
        int hipGunKickReducedKickBullets;
        float hipGunKickReducedKickPercent;
        float fHipGunKickPitchMin;
        float fHipGunKickPitchMax;
        float fHipGunKickYawMin;
        float fHipGunKickYawMax;
        float fHipGunKickAccel;
        float fHipGunKickSpeedMax;
        float fHipGunKickSpeedDecay;
        float fHipGunKickStaticDecay;
        float fHipViewKickPitchMin;
        float fHipViewKickPitchMax;
        float fHipViewKickMinMagnitude;
        float fHipViewKickYawMin;
        float fHipViewKickYawMax;
        float fHipViewScatterMin;
        float fHipViewScatterMax;
        float fAdsViewKickCenterDuckedScale;
        float fAdsViewKickCenterProneScale;
        float fAntiQuickScopeTime;
        float fAntiQuickScopeScale;
        float fAntiQuickScopeSpreadMultiplier;
        float fAntiQuickScopeSpreadMax;
        float fAntiQuickScopeSwayFactor;
        float fightDist;
        float maxDist;
        //const char *accuracyGraphName[2];   // TODO: Order is accuracyGraphName[0] -> accuracyGraphKnots[0] -> originalAccuracyGraphKnots[0] -> accuracyGraphName[1] -> ...
        // Which is currently not possible to do in code generation. Afaik this is the only place where this is the case.
        // So might be something to fix but on the other hand it might be too much work for this little inconvenience.
        const char* accuracyGraphName0;
        const char* accuracyGraphName1;
        //vec2_t *accuracyGraphKnots[2];
        vec2_t* accuracyGraphKnots0;
        vec2_t* accuracyGraphKnots1;
        //vec2_t *originalAccuracyGraphKnots[2];
        vec2_t* originalAccuracyGraphKnots0;
        vec2_t* originalAccuracyGraphKnots1;
        int accuracyGraphKnotCount[2];
        int originalAccuracyGraphKnotCount[2];
        int iPositionReloadTransTime;
        float leftArc;
        float rightArc;
        float topArc;
        float bottomArc;
        float accuracy;
        float aiSpread;
        float playerSpread;
        float minTurnSpeed[2];
        float maxTurnSpeed[2];
        float pitchConvergenceTime;
        float yawConvergenceTime;
        float suppressTime;
        float maxRange;
        float fAnimHorRotateInc;
        float fPlayerPositionDist;
        const char* szUseHintString;
        const char* dropHintString;
        int iUseHintStringIndex;
        int dropHintStringIndex;
        float horizViewJitter;
        float vertViewJitter;
        float cameraShakeScale;
        int cameraShakeDuration;
        int cameraShakeRadius;
        float explosionCameraShakeScale;
        int explosionCameraShakeDuration;
        int explosionCameraShakeRadius;
        const char* szScript;
        float destabilizationRateTime;
        float destabilizationCurvatureMax;
        int destabilizeDistance;
        float* locationDamageMultipliers;
        const char* fireRumble;
        const char* meleeImpactRumble;
        const char* reloadRumble;
        const char* explosionRumble;
        TracerDef* tracerType;
        TracerDef* enemyTracerType;
        float adsDofStart;
        float adsDofEnd;
        float hipDofStart;
        float hipDofEnd;
        float scanSpeed;
        float scanAccel;
        int scanPauseTime;
        const char* flameTableFirstPerson;
        const char* flameTableThirdPerson;
        flameTable* flameTableFirstPersonPtr;
        flameTable* flameTableThirdPersonPtr;
        FxEffectDef* tagFx_preparationEffect;
        FxEffectDef* tagFlash_preparationEffect;
        bool doGibbing;
        float maxGibDistance;
        float altScopeADSTransInTime;
        float altScopeADSTransOutTime;
        int iIntroFireTime;
        int iIntroFireLength;
        FxEffectDef* meleeSwipeEffect;
        FxEffectDef* meleeImpactEffect;
        FxEffectDef* meleeImpactNoBloodEffect;
        const char* throwBackType;
        WeaponCamo* weaponCamo;
        float customFloat0;
        float customFloat1;
        float customFloat2;
        int customBool0;
        int customBool1;
        int customBool2;
    };

    enum weapAnimFiles_t
    {
        WEAP_ANIM_ROOT = 0x0,
        WEAP_ANIM_IDLE = 0x1,
        WEAP_ANIM_EMPTY_IDLE = 0x2,
        WEAP_ANIM_FIRE_INTRO = 0x3,
        WEAP_ANIM_FIRE = 0x4,
        WEAP_ANIM_HOLD_FIRE = 0x5,
        WEAP_ANIM_LASTSHOT = 0x6,
        WEAP_ANIM_FINALSHOT = 0x7,
        WEAP_ANIM_RECHAMBER = 0x8,
        WEAP_ANIM_MELEE = 0x9,
        WEAP_ANIM_MELEE1 = 0xA,
        WEAP_ANIM_MELEE2 = 0xB,
        WEAP_ANIM_MELEE3 = 0xC,
        WEAP_ANIM_MELEE_EMPTY = 0xD,
        WEAP_ANIM_MELEE_CHARGE = 0xE,
        WEAP_ANIM_MELEE_CHARGE_EMPTY = 0xF,
        WEAP_ANIM_RELOAD = 0x10,
        WEAP_ANIM_RELOAD_RIGHT = 0x11,
        WEAP_ANIM_RELOAD_EMPTY = 0x12,
        WEAP_ANIM_RELOAD_START = 0x13,
        WEAP_ANIM_RELOAD_END = 0x14,
        WEAP_ANIM_RELOAD_QUICK = 0x15,
        WEAP_ANIM_RELOAD_QUICK_EMPTY = 0x16,
        WEAP_ANIM_RAISE = 0x17,
        WEAP_ANIM_FIRST_RAISE = 0x18,
        WEAP_ANIM_DROP = 0x19,
        WEAP_ANIM_ALT_RAISE = 0x1A,
        WEAP_ANIM_ALT_DROP = 0x1B,
        WEAP_ANIM_QUICK_RAISE = 0x1C,
        WEAP_ANIM_QUICK_DROP = 0x1D,
        WEAP_ANIM_EMPTY_RAISE = 0x1E,
        WEAP_ANIM_EMPTY_DROP = 0x1F,
        WEAP_ANIM_SPRINT_IN = 0x20,
        WEAP_ANIM_SPRINT_LOOP = 0x21,
        WEAP_ANIM_SPRINT_OUT = 0x22,
        WEAP_ANIM_SPRINT_EMPTY_IN = 0x23,
        WEAP_ANIM_SPRINT_EMPTY_LOOP = 0x24,
        WEAP_ANIM_SPRINT_EMPTY_OUT = 0x25,
        WEAP_ANIM_LOWREADY_IN = 0x26,
        WEAP_ANIM_LOWREADY_LOOP = 0x27,
        WEAP_ANIM_LOWREADY_OUT = 0x28,
        WEAP_ANIM_CONT_FIRE_IN = 0x29,
        WEAP_ANIM_CONT_FIRE_LOOP = 0x2A,
        WEAP_ANIM_CONT_FIRE_OUT = 0x2B,
        WEAP_ANIM_CRAWL_IN = 0x2C,
        WEAP_ANIM_CRAWL_FORWARD = 0x2D,
        WEAP_ANIM_CRAWL_BACK = 0x2E,
        WEAP_ANIM_CRAWL_RIGHT = 0x2F,
        WEAP_ANIM_CRAWL_LEFT = 0x30,
        WEAP_ANIM_CRAWL_OUT = 0x31,
        WEAP_ANIM_CRAWL_EMPTY_IN = 0x32,
        WEAP_ANIM_CRAWL_EMPTY_FORWARD = 0x33,
        WEAP_ANIM_CRAWL_EMPTY_BACK = 0x34,
        WEAP_ANIM_CRAWL_EMPTY_RIGHT = 0x35,
        WEAP_ANIM_CRAWL_EMPTY_LEFT = 0x36,
        WEAP_ANIM_CRAWL_EMPTY_OUT = 0x37,
        WEAP_ANIM_DEPLOY = 0x38,
        WEAP_ANIM_BREAKDOWN = 0x39,
        WEAP_ANIM_DETONATE = 0x3A,
        WEAP_ANIM_NIGHTVISION_WEAR = 0x3B,
        WEAP_ANIM_NIGHTVISION_REMOVE = 0x3C,
        WEAP_ANIM_ADS_FIRE = 0x3D,
        WEAP_ANIM_ADS_LASTSHOT = 0x3E,
        WEAP_ANIM_ADS_FIRE_INTRO = 0x3F,
        WEAP_ANIM_ADS_RECHAMBER = 0x40,
        WEAP_ANIM_DTP_IN = 0x41,
        WEAP_ANIM_DTP_LOOP = 0x42,
        WEAP_ANIM_DTP_OUT = 0x43,
        WEAP_ANIM_DTP_EMPTY_IN = 0x44,
        WEAP_ANIM_DTP_EMPTY_LOOP = 0x45,
        WEAP_ANIM_DTP_EMPTY_OUT = 0x46,
        WEAP_ANIM_SLIDE_IN = 0x47,
        WEAP_ANIM_MANTLE = 0x48,
        WEAP_ANIM_CAMERA_SPRINT_LOOP = 0x49,
        WEAP_ANIM_CAMERA_DTP_IN = 0x4A,
        WEAP_ANIM_CAMERA_DTP_LOOP = 0x4B,
        WEAP_ANIM_CAMERA_DTP_OUT = 0x4C,
        WEAP_ANIM_CAMERA_MANTLE = 0x4D,
        WEAP_ANIM_FIRE_LEFT = 0x4E,
        WEAP_ANIM_LASTSHOT_LEFT = 0x4F,
        WEAP_ANIM_FINALSHOT_LEFT = 0x50,
        WEAP_ANIM_IDLE_LEFT = 0x51,
        WEAP_ANIM_EMPTY_IDLE_LEFT = 0x52,
        WEAP_ANIM_RELOAD_EMPTY_LEFT = 0x53,
        WEAP_ANIM_RELOAD_LEFT = 0x54,
        WEAP_ANIM_ADS_UP = 0x55,
        WEAP_ANIM_ADS_DOWN = 0x56,
        WEAP_ANIM_ADS_UP_OTHER_SCOPE = 0x57,
        NUM_WEAP_ANIMS = 0x58,
    };

    enum materialSurfType_t
    {
        SURF_TYPE_DEFAULT,
        SURF_TYPE_BARK,
        SURF_TYPE_BRICK,
        SURF_TYPE_CARPET,
        SURF_TYPE_CLOTH,
        SURF_TYPE_CONCRETE,
        SURF_TYPE_DIRT,
        SURF_TYPE_FLESH,
        SURF_TYPE_FOLIAGE,
        SURF_TYPE_GLASS,
        SURF_TYPE_GRASS,
        SURF_TYPE_GRAVEL,
        SURF_TYPE_ICE,
        SURF_TYPE_METAL,
        SURF_TYPE_MUD,
        SURF_TYPE_PAPER,
        SURF_TYPE_PLASTER,
        SURF_TYPE_ROCK,
        SURF_TYPE_SAND,
        SURF_TYPE_SNOW,
        SURF_TYPE_WATER,
        SURF_TYPE_WOOD,
        SURF_TYPE_ASPHALT,
        SURF_TYPE_CERAMIC,
        SURF_TYPE_PLASTIC,
        SURF_TYPE_RUBBER,
        SURF_TYPE_CUSHION,
        SURF_TYPE_FRUIT,
        SURF_TYPE_PAINTED_METAL,
        SURF_TYPE_PLAYER,
        SURF_TYPE_TALL_GRASS,
        SURF_TYPE_RIOT_SHIELD,

        SURF_TYPE_NUM
    };

    struct WeaponVariantDef
    {
        const char* szInternalName;
        int iVariantCount;
        WeaponDef* weapDef;
        const char* szDisplayName;
        const char* szAltWeaponName;
        const char* szAttachmentUnique;
        WeaponAttachment** attachments;
        WeaponAttachmentUnique** attachmentUniques;
        const char** szXAnims;
        unsigned __int16* hideTags;
        XModel** attachViewModel;
        XModel** attachWorldModel;
        const char** attachViewModelTag;
        const char** attachWorldModelTag;
        float attachViewModelOffsets[24];
        float attachWorldModelOffsets[24];
        float attachViewModelRotations[24];
        float attachWorldModelRotations[24];
        vec3_t stowedModelOffsets;
        vec3_t stowedModelRotations;
        unsigned int altWeaponIndex;
        int iAttachments;
        bool bIgnoreAttachments;
        int iClipSize;
        int iReloadTime;
        int iReloadEmptyTime;
        int iReloadQuickTime;
        int iReloadQuickEmptyTime;
        int iAdsTransInTime;
        int iAdsTransOutTime;
        int iAltRaiseTime;
        const char* szAmmoDisplayName;
        const char* szAmmoName;
        int iAmmoIndex;
        const char* szClipName;
        int iClipIndex;
        float fAimAssistRangeAds;
        float fAdsSwayHorizScale;
        float fAdsSwayVertScale;
        float fAdsViewKickCenterSpeed;
        float fHipViewKickCenterSpeed;
        float fAdsZoomFov1;
        float fAdsZoomFov2;
        float fAdsZoomFov3;
        float fAdsZoomInFrac;
        float fAdsZoomOutFrac;
        float fOverlayAlphaScale;
        float fOOPosAnimLength[2];
        bool bSilenced;
        bool bDualMag;
        bool bInfraRed;
        bool bTVGuided;
        unsigned int perks[2];
        bool bAntiQuickScope;
        Material* overlayMaterial;
        Material* overlayMaterialLowRes;
        Material* dpadIcon;
        weaponIconRatioType_t dpadIconRatio;
        bool noAmmoOnDpadIcon;
        bool mmsWeapon;
        bool mmsInScope;
        float mmsFOV;
        float mmsAspect;
        float mmsMaxDist;
        vec3_t ikLeftHandIdlePos;
        vec3_t ikLeftHandOffset;
        vec3_t ikLeftHandRotation;
        bool bUsingLeftHandProneIK;
        vec3_t ikLeftHandProneOffset;
        vec3_t ikLeftHandProneRotation;
        vec3_t ikLeftHandUiViewerOffset;
        vec3_t ikLeftHandUiViewerRotation;
    };

    struct WeaponFullDef
    {
        WeaponVariantDef weapVariantDef;
        WeaponDef weapDef;
        WeaponAttachment* attachments[63];
        WeaponAttachmentUnique* attachmentUniques[95];
        XModel* gunXModel[16];
        const char* szXAnims[88];
        unsigned __int16 hideTags[32];
        unsigned __int16 notetrackSoundMapKeys[20];
        unsigned __int16 notetrackSoundMapValues[20];
        XModel* worldModel[16];
        XModel* attachViewModel[8];
        XModel* attachWorldModel[8];
        const char* attachViewModelTag[8];
        const char* attachWorldModelTag[8];
        float parallelBounce[32];
        float perpendicularBounce[32];
        float locationDamageMultipliers[21];
        char weaponCamo[64];
    };


    struct WeaponCamoSet
    {
        GfxImage* solidCamoImage;
        GfxImage* patternCamoImage;
        vec2_t patternOffset;
        float patternScale;
    };


    struct WeaponCamoMaterialSet
    {
        unsigned int numMaterials;
        WeaponCamoMaterial* materials;
    };


    enum SndMenuCategory
    {
        SND_CATEGORY_SFX = 0x0,
        SND_CATEGORY_MUSIC = 0x1,
        SND_CATEGORY_VOICE = 0x2,
        SND_CATEGORY_UI = 0x3,
        SND_CATEGORY_CINEMATIC = 0x4,
        SND_CATEGORY_COUNT = 0x5,
    };


    struct SndVolumeGroup
    {
        char name[32];
        char parentName[32];
        unsigned int id;
        int parentIndex;
        SndMenuCategory category;
        unsigned __int16 attenuationSp;
        unsigned __int16 attenuationMp;
    };


    struct SndCurve
    {
        char name[32];
        unsigned int id;
        vec2_t points[8];
    };


    struct SndPan
    {
        char name[32];
        unsigned int id;
        float front;
        float back;
        float center;
        float lfe;
        float left;
        float right;
    };


    struct SndDuckGroup
    {
        char name[32];
        unsigned int id;
    };


    struct SndContext
    {
        unsigned int type;
        unsigned int values[8];
    };


    struct SndMaster
    {
        char name[32];
        unsigned int id;
        int lowE;
        float lowG;
        float lowF;
        float lowQ;
        int peak1E;
        float peak1G;
        float peak1F;
        float peak1Q;
        int peak2E;
        float peak2G;
        float peak2F;
        float peak2Q;
        int hiE;
        float hiG;
        float hiF;
        float hiQ;
        float eqG;
        int compE;
        float compPG;
        float compMG;
        float compT;
        float compR;
        float compTA;
        float compTR;
        int limitE;
        float limitPG;
        float limitMG;
        float limitT;
        float limitR;
        float limitTA;
        float limitTR;
        float busReverbG;
        float busFxG;
        float busVoiceG;
        float busPfutzG;
        float busHdrfxG;
        float busUiG;
        float busMusicG;
        float busMovieG;
        float busVcsG;
        int busReverbE;
        int busFxE;
        int busVoiceE;
        int busPfutzE;
        int busHdrfxE;
        int busUiE;
        int busMusicE;
        int busMovieE;
        int hdrfxCompE;
        int voiceEqE;
        int voiceCompE;
    };


    struct SndSidechainDuck
    {
        char name[32];
        unsigned int id;
        float g;
        float f;
        float q;
        float ta;
        float tr;
        float tf;
    };


    struct SndFutz
    {
        char name[32];
        unsigned int id;
        float bpfF;
        float bpfQ;
        float lsG;
        float lsF;
        float lsQ;
        float dist;
        float preG;
        float postG;
        float th;
        float tg;
        float clippre;
        float clippost;
        float blend;
        unsigned int startAliasId;
        unsigned int stopAliasId;
        unsigned int loopAliasId;
    };


    struct FxSpawnDefLooping
    {
        int intervalMsec;
        int count;
    };


    struct FxIntRange
    {
        int base;
        int amplitude;
    };


    struct FxSpawnDefOneShot
    {
        FxIntRange count;
    };


    union FxSpawnDef
    {
        FxSpawnDefLooping looping;
        FxSpawnDefOneShot oneShot;
    };


    struct FxElemAtlas
    {
        char behavior;
        char index;
        char fps;
        char loopCount;
        char colIndexBits;
        char rowIndexBits;
        unsigned __int16 entryCountAndIndexRange;
    };


    union FxEffectDefRef
    {
        FxEffectDef* handle;
        const char* name;
    };


    union FxElemVisuals
    {
        void* anonymous;
        Material* material;
        XModel* model;
        FxEffectDefRef effectDef;
        const char* soundName;
        GfxLightDef* lightDef;
    };


    union FxElemDefVisuals
    {
        FxElemMarkVisuals* markArray;
        FxElemVisuals* array;
        FxElemVisuals instance;
    };


    union FxElemExtendedDefPtr
    {
        FxTrailDef* trailDef;
        FxSpotLightDef* spotLightDef;
        char* unknownDef;
    };


    struct FxBillboardTrim
    {
        float topWidth;
        float bottomWidth;
    };


    union FxElemDefUnion
    {
        FxBillboardTrim billboard;
        FxIntRange cloudDensityRange;
    };


    struct FxElemSpawnSound
    {
        const char* spawnSound;
    };

    enum FxElemType : char
    {
        FX_ELEM_TYPE_SPRITE_BILLBOARD = 0x0,
        FX_ELEM_TYPE_SPRITE_ORIENTED = 0x1,
        FX_ELEM_TYPE_SPRITE_ROTATED = 0x2,
        FX_ELEM_TYPE_TAIL = 0x3,
        FX_ELEM_TYPE_LINE = 0x4,
        FX_ELEM_TYPE_TRAIL = 0x5,
        FX_ELEM_TYPE_CLOUD = 0x6,
        FX_ELEM_TYPE_MODEL = 0x7,
        FX_ELEM_TYPE_OMNI_LIGHT = 0x8,
        FX_ELEM_TYPE_SPOT_LIGHT = 0x9,
        FX_ELEM_TYPE_SOUND = 0xA,
        FX_ELEM_TYPE_DECAL = 0xB,
        FX_ELEM_TYPE_RUNNER = 0xC,
        FX_ELEM_TYPE_COUNT = 0xD,
        FX_ELEM_TYPE_LAST_SPRITE = 0x5,
        FX_ELEM_TYPE_LAST_DRAWN = 0x9,
    };


    const struct FxElemDef
    {
        int flags;
        FxSpawnDef spawn;
        FxFloatRange spawnRange;
        FxFloatRange fadeInRange;
        FxFloatRange fadeOutRange;
        float spawnFrustumCullRadius;
        FxIntRange spawnDelayMsec;
        FxIntRange lifeSpanMsec;
        FxFloatRange spawnOrigin[3];
        FxFloatRange spawnOffsetRadius;
        FxFloatRange spawnOffsetHeight;
        FxFloatRange spawnAngles[3];
        FxFloatRange angularVelocity[3];
        FxFloatRange initialRotation;
        unsigned int rotationAxis;
        FxFloatRange gravity;
        FxFloatRange reflectionFactor;
        FxElemAtlas atlas;
        float windInfluence;
        FxElemType elemType;
        char visualCount;
        char velIntervalCount;
        char visStateIntervalCount;
        FxElemVelStateSample* velSamples;
        FxElemVisStateSample* visSamples;
        FxElemDefVisuals visuals;
        vec3_t collMins;
        vec3_t collMaxs;
        FxEffectDefRef effectOnImpact;
        FxEffectDefRef effectOnDeath;
        FxEffectDefRef effectEmitted;
        FxFloatRange emitDist;
        FxFloatRange emitDistVariance;
        FxEffectDefRef effectAttached;
        FxElemExtendedDefPtr extended;
        char sortOrder;
        char lightingFrac;
        char unused[2];
        unsigned __int16 alphaFadeTimeMsec;
        unsigned __int16 maxWindStrength;
        unsigned __int16 spawnIntervalAtMaxWind;
        unsigned __int16 lifespanAtMaxWind;
        FxElemDefUnion u;
        FxElemSpawnSound spawnSound;
        vec2_t billboardPivot;
    };


    struct FxImpactEntry
    {
        FxEffectDef* nonflesh[32];
        FxEffectDef* flesh[4];
    };


    struct StringTableCell
    {
        const char* string;
        int hash;
    };


    enum LbColType
    {
        LBCOL_TYPE_NUMBER = 0x0,
        LBCOL_TYPE_TIME = 0x1,
        LBCOL_TYPE_LEVELXP = 0x2,
        LBCOL_TYPE_PRESTIGE = 0x3,
        LBCOL_TYPE_BIGNUMBER = 0x4,
        LBCOL_TYPE_PERCENT = 0x5,
        LBCOL_TYPE_TIME_FULL = 0x6,
        LBCOL_TYPE_COUNT = 0x7,
    };


    enum LbAggType
    {
        LBAGG_TYPE_MIN = 0x0,
        LBAGG_TYPE_MAX = 0x1,
        LBAGG_TYPE_ADD = 0x2,
        LBAGG_TYPE_REPLACE = 0x3,
        LBAGG_TYPE_COUNT = 0x4,
    };


    struct LbColumnDef
    {
        const char* name;
        int colId;
        int dwColIndex;
        bool hidden;
        const char* statName;
        LbColType type;
        int precision;
        LbAggType agg;
        const char* localization;
        int uiCalColX;
        int uiCalColY;
    };


    struct ddlDef_t
    {
        int version;
        int size;
        ddlStructDef_t* structList;
        int structCount;
        ddlEnumDef_t* enumList;
        int enumCount;
        ddlDef_t* next;
    };


    struct Glass
    {
        unsigned int numCellIndices;
        unsigned __int16 cellIndices[6];
        GlassDef* glassDef;
        unsigned int index;
        unsigned int brushModel;
        vec3_t origin;
        vec3_t angles;
        vec3_t absmin;
        vec3_t absmax;
        bool isPlanar;
        char numOutlineVerts;
        char binormalSign;
        vec2_t* outline;
        vec3_t outlineAxis[3];
        vec3_t outlineOrigin;
        float uvScale;
        float thickness;
    };


    struct KeyValuePair
    {
        int keyHash;
        int namespaceHash;
        const char* value;
    };


    enum DevEventType
    {
        EVENT_ACTIVATE = 0x0,
        EVENT_DEACTIVATE = 0x1,
        EVENT_ACCEPT = 0x2,
        EVENT_UPDATE = 0x3,
        EVENT_DRAW = 0x4,
        EVENT_SAVE = 0x5,
    };


    enum LocalClientNum_t
    {
        INVALID_LOCAL_CLIENT = 0xFFFFFFFF,
        LOCAL_CLIENT_FIRST = 0x0,
        LOCAL_CLIENT_0 = 0x0,
        ONLY_LOCAL_CLIENT = 0x0,
        LOCAL_CLIENT_COUNT = 0x1,
    };


    struct __declspec(align(4)) DevGraph
    {
        vec2_t* knots;
        int* knotCount;
        int knotCountMax;
        int selectedKnot;
        void* eventCallback; //void (__cdecl *eventCallback)(DevGraph *, DevEventType, LocalClientNum_t);
        void* textCallback; //void (__cdecl *textCallback)(DevGraph *, const float, const float, char *, const int);
        void* data;
        bool disableEditingEndPoints;
    };


    struct GraphFloat
    {
        char name[64];
        vec2_t knots[32];
        int knotCount;
        float scale;
        DevGraph devguiGraph;
    };

    typedef char ByteVec[3];
    typedef __declspec(align(4)) unsigned __int16 UShortVec[3];

    union XAnimDynamicFrames
    {
        ByteVec *_1;
        UShortVec *_2;
    };


    union XAnimDynamicIndicesTrans
    {
        char _1[1];
        unsigned __int16 _2[1];
    };


    struct __declspec(align(4)) XAnimPartTransFrames
    {
        vec3_t mins;
        vec3_t size;
        XAnimDynamicFrames frames;
        XAnimDynamicIndicesTrans indices;
    };


    union XAnimPartTransData
    {
        XAnimPartTransFrames frames;
        vec3_t frame0;
    };


    struct XAnimPartTrans
    {
        unsigned __int16 size;
        char smallTrans;
        XAnimPartTransData u;
    };

    union XAnimDynamicIndicesDeltaQuat2
    {
        char _1[1];
        unsigned __int16 _2[1];
    };

    typedef __declspec(align(4)) __int16 XQuat2[2];

    struct __declspec(align(4)) XAnimDeltaPartQuatDataFrames2
    {
        XQuat2 *frames;
        XAnimDynamicIndicesDeltaQuat2 indices;
    };


    union XAnimDeltaPartQuatData2
    {
        XAnimDeltaPartQuatDataFrames2 frames;
        XQuat2 frame0;
    };


    struct XAnimDeltaPartQuat2
    {
        unsigned __int16 size;
        XAnimDeltaPartQuatData2 u;
    };

    union XAnimDynamicIndicesDeltaQuat
    {
        char _1[1];
        unsigned __int16 _2[1];
    };

    typedef __declspec(align(4))  __int16 XQuat[4];

    struct __declspec(align(4)) XAnimDeltaPartQuatDataFrames
    {
        XQuat *frames;
        XAnimDynamicIndicesDeltaQuat indices;
    };


    union XAnimDeltaPartQuatData
    {
        XAnimDeltaPartQuatDataFrames frames;
        XQuat frame0;
    };


    struct XAnimDeltaPartQuat
    {
        unsigned __int16 size;
        XAnimDeltaPartQuatData u;
    };


    union GfxColor
    {
        unsigned int packed;
        char array[4];
    };


    union PackedTexCoords
    {
        unsigned int packed;
    };


    union PackedUnitVec
    {
        unsigned int packed;
    };


    struct __declspec(align(16)) GfxPackedVertex
    {
        vec3_t xyz;
        float binormalSign;
        GfxColor color;
        PackedTexCoords texCoord;
        PackedUnitVec normal;
        PackedUnitVec tangent;
    };


    struct XRigidVertList
    {
        unsigned __int16 boneOffset;
        unsigned __int16 vertCount;
        unsigned __int16 triOffset;
        unsigned __int16 triCount;
        XSurfaceCollisionTree* collisionTree;
    };


    struct XModelCollTri_s
    {
        vec4_t plane;
        vec4_t svec;
        vec4_t tvec;
    };

    typedef __declspec(align(16)) PhysGeomInfo PhysGeomInfo16;


    struct PhysGeomList
    {
        unsigned int count;
        PhysGeomInfo16* geoms;
        int contents;
    };

    /* struct __cppobj ID3D11BlendState : ID3D11DeviceChild
    {
    };*/

    /* struct __cppobj ID3D11DepthStencilState : ID3D11DeviceChild
    {
    };*/

    /* struct __cppobj ID3D11RasterizerState : ID3D11DeviceChild
    {
    };*/

    /* struct IUnknownVtbl
    {
      HRESULT (__stdcall *QueryInterface)(IUnknown *this, _GUID *, void **);
      unsigned int (__stdcall *AddRef)(IUnknown *this);
      unsigned int (__stdcall *Release)(IUnknown *this);
    };*/


    struct MaterialStreamRouting
    {
        char source;
        char dest;
    };


    struct MaterialVertexStreamRouting
    {
        MaterialStreamRouting data[16];
        ID3D11InputLayout* decl[20];
    };


    struct MaterialVertexDeclaration
    {
        char streamCount;
        bool hasOptionalSource;
        bool isLoaded;
        MaterialVertexStreamRouting routing;
    };


    union MaterialArgumentLocation
    {
        unsigned __int16 offset;

        struct
        {
            char textureIndex;
            char samplerIndex;
        };
    };


    struct MaterialArgumentCodeConst
    {
        unsigned __int16 index;
        char firstRow;
        char rowCount;
    };


    union MaterialArgumentDef
    {
        const float (*literalConst)[4];
        MaterialArgumentCodeConst codeConst;
        unsigned int codeSampler;
        unsigned int nameHash;
    };

    enum MaterialShaderArgumentType
    {
        MTL_ARG_MATERIAL_VERTEX_CONST = 0x0,
        MTL_ARG_LITERAL_VERTEX_CONST = 0x1,
        MTL_ARG_MATERIAL_PIXEL_SAMPLER = 0x2,
        MTL_ARG_CODE_PRIM_BEGIN = 0x3,
        MTL_ARG_CODE_VERTEX_CONST = 0x3,
        MTL_ARG_CODE_PIXEL_SAMPLER = 0x4,
        MTL_ARG_CODE_PIXEL_CONST = 0x5,
        MTL_ARG_CODE_PRIM_END = 0x6,
        MTL_ARG_MATERIAL_PIXEL_CONST = 0x6,
        MTL_ARG_LITERAL_PIXEL_CONST = 0x7,
        MLT_ARG_COUNT = 0x8,
    };


    struct MaterialShaderArgument
    {
        unsigned __int16 type;
        MaterialArgumentLocation location;
        unsigned __int16 size;
        unsigned __int16 buffer;
        MaterialArgumentDef u;
    };


    struct SndAlias
    {
        const char* name;
        unsigned int id;
        const char* subtitle;
        const char* secondaryname;
        unsigned int assetId;
        const char* assetFileName;
        unsigned int flags0;
        unsigned int flags1;
        unsigned int duck;
        unsigned int contextType;
        unsigned int contextValue;
        unsigned int stopOnPlay;
        unsigned int futzPatch;
        unsigned __int16 fluxTime;
        unsigned __int16 startDelay;
        unsigned __int16 reverbSend;
        unsigned __int16 centerSend;
        unsigned __int16 volMin;
        unsigned __int16 volMax;
        unsigned __int16 pitchMin;
        unsigned __int16 pitchMax;
        unsigned __int16 distMin;
        unsigned __int16 distMax;
        unsigned __int16 distReverbMax;
        unsigned __int16 envelopMin;
        unsigned __int16 envelopMax;
        unsigned __int16 envelopPercentage;
        __int16 fadeIn;
        __int16 fadeOut;
        __int16 dopplerScale;
        char minPriorityThreshold;
        char maxPriorityThreshold;
        char probability;
        char occlusionLevel;
        char minPriority;
        char maxPriority;
        char pan;
        char limitCount;
        char entityLimitCount;
        char duckGroup;
    };


    struct __declspec(align(4)) pathlink_s
    {
        float fDist;
        unsigned __int16 nodeNum;
        char disconnectCount;
        char negotiationLink;
        char flags;
        char ubBadPlaceCount[5];
    };


    struct GfxAabbTree
    {
        vec3_t mins;
        vec3_t maxs;
        unsigned __int16 childCount;
        unsigned __int16 surfaceCount;
        unsigned __int16 startSurfIndex;
        unsigned __int16 smodelIndexCount;
        unsigned __int16* smodelIndexes;
        int childrenOffset;
    };


    struct GfxPortalWritable
    {
        bool isQueued;
        bool isAncestor;
        char recursionDepth;
        char hullPointCount;
        vec2_t* hullPoints;
        GfxPortal* queuedParent;
    };


    struct DpvsPlane
    {
        vec4_t coeffs;
        char side[3];
        char pad;
    };


    struct GfxPortal
    {
        GfxPortalWritable writable;
        DpvsPlane plane;
        GfxCell* cell;
        vec3_t* vertices;
        char vertexCount;
        vec3_t hullAxis[2];
        vec3_t bounds[2];
    };


    struct GfxReflectionProbeVolumeData
    {
        vec4_t volumePlanes[6];
    };


    struct SSkinShaders
    {
        char_align128* pixelShaderAlign;
        char_align4* pixelShader;
        char_align4* vertexShader;
        int pixelShaderSize;
        int vertexShaderSize;
    };


    struct SSkinModel
    {
        int numVerts;
        int numTris;
        SSkinVert* verts;
        unsigned __int16* tris;
    };


    struct SSkinAnim
    {
        int bones;
        int width;
        int frames;
        float_align128* data;
    };


    struct half
    {
        unsigned __int16 v;
    };


    union half4
    {
        struct
        {
            half x;
            half y;
            half z;
            half w;
        };

        // unsigned __int64 v;
    };


    union half2
    {
        struct
        {
            half x;
            half y;
        };

        unsigned int v;
    };


    struct __declspec(align(4)) SSkinVert
    {
        half4 pos_bone;
        PackedUnitVec normal;
        half2 uv;
    };


    struct GfxLightRegionHull
    {
        float kdopMidPoint[9];
        float kdopHalfSize[9];
        unsigned int axisCount;
        GfxLightRegionAxis* axis;
    };


    struct GenericEventScript
    {
        ScriptCondition* prerequisites;
        ExpressionStatement condition;
        int type;
        bool fireOnTrue;
        const char* action;
        int blockID;
        int constructID;
        GenericEventScript* next;
    };


    enum dvarType_t
    {
        DVAR_TYPE_INVALID = 0x0,
        DVAR_TYPE_BOOL = 0x1,
        DVAR_TYPE_FLOAT = 0x2,
        DVAR_TYPE_FLOAT_2 = 0x3,
        DVAR_TYPE_FLOAT_3 = 0x4,
        DVAR_TYPE_FLOAT_4 = 0x5,
        DVAR_TYPE_INT = 0x6,
        DVAR_TYPE_ENUM = 0x7,
        DVAR_TYPE_STRING = 0x8,
        DVAR_TYPE_COLOR = 0x9,
        DVAR_TYPE_INT64 = 0xA,
        DVAR_TYPE_LINEAR_COLOR_RGB = 0xB,
        DVAR_TYPE_COLOR_XYZ = 0xC,
        DVAR_TYPE_COUNT = 0xD,
    };


    union DvarValue
    {
        bool enabled;
        int integer;
        unsigned int unsignedInt;
        __int64 integer64;
        unsigned __int64 unsignedInt64;
        float value;
        vec4_t vector;
        const char* string;
        char color[4];
    };


    union DvarLimits
    {
        struct
        {
            int stringCount;
            const char** strings;
        } enumeration;

        struct
        {
            int min;
            int max;
        } integer;

        struct
        {
            __int64 min;
            __int64 max;
        } integer64;

        struct
        {
            float min;
            float max;
        } value;

        struct
        {
            float min;
            float max;
        } vector;
    };


    struct __declspec(align(8)) dvar_t
    {
        const char* name;
        const char* description;
        int hash;
        unsigned int flags;
        dvarType_t type;
        bool modified;
        DvarValue current;
        DvarValue latched;
        DvarValue reset;
        DvarLimits domain;
        dvar_t* hashNext;
    };


    union textDefData_t
    {
        focusItemDef_s* focusItemDef;
        gameMsgDef_s* gameMsgDef;
        void* data;
    };


    struct textDef_s
    {
        rectDef_s textRect[1];
        int alignment;
        int fontEnum;
        int itemFlags;
        int textAlignMode;
        float textalignx;
        float textaligny;
        float textscale;
        float textpadding;
        int textStyle;
        vec4_t fontColor;
        vec4_t glowColor;
        vec4_t shadowColor;
        float fontBlur;
        float glowSize;
        float shadowSize;
        vec2_t shadowOffset;
        const char* text;
        textExp_s* textExpData;
        textDefData_t textTypeData;
    };


    struct imageDef_s
    {
        ExpressionStatement materialExp;
    };


    union focusDefData_t
    {
        listBoxDef_s* listBox;
        multiDef_s* multi;
        profileMultiDef_s* profileMulti;
        editFieldDef_s* editField;
        enumDvarDef_s* enumDvar;
        void* data;
    };


    struct focusItemDef_s
    {
        const char* mouseEnterText;
        const char* mouseExitText;
        const char* mouseEnter;
        const char* mouseExit;
        ItemKeyHandler* onKey;
        focusDefData_t focusTypeData;
    };


    struct ownerDrawDef_s
    {
        ExpressionStatement dataExp;
    };


    struct rectData_s
    {
        ExpressionStatement rectXExp;
        ExpressionStatement rectYExp;
        ExpressionStatement rectWExp;
        ExpressionStatement rectHExp;
    };


    struct animParamsDef_t
    {
        const char* name;
        rectDef_s rectClient;
        float borderSize;
        vec4_t foreColor;
        vec4_t backColor;
        vec4_t borderColor;
        vec4_t outlineColor;
        float textScale;
        float rotation;
        GenericEventHandler* onEvent;
    };


    struct UIAnimInfo
    {
        int animStateCount;
        animParamsDef_t** animStates;
        animParamsDef_t currentAnimState;
        animParamsDef_t nextAnimState;
        int animating;
        int animStartTime;
        int animDuration;
    };


    struct flameTable
    {
        float flameVar_streamChunkGravityStart;
        float flameVar_streamChunkGravityEnd;
        float flameVar_streamChunkMaxSize;
        float flameVar_streamChunkStartSize;
        float flameVar_streamChunkEndSize;
        float flameVar_streamChunkStartSizeRand;
        float flameVar_streamChunkEndSizeRand;
        float flameVar_streamChunkDistScalar;
        float flameVar_streamChunkDistSwayScale;
        float flameVar_streamChunkDistSwayVelMax;
        float flameVar_streamChunkSpeed;
        float flameVar_streamChunkDecel;
        float flameVar_streamChunkVelocityAddScale;
        float flameVar_streamChunkDuration;
        float flameVar_streamChunkDurationScaleMaxVel;
        float flameVar_streamChunkDurationVelScalar;
        float flameVar_streamChunkSizeSpeedScale;
        float flameVar_streamChunkSizeAgeScale;
        float flameVar_streamChunkSpawnFireIntervalStart;
        float flameVar_streamChunkSpawnFireIntervalEnd;
        float flameVar_streamChunkSpawnFireMinLifeFrac;
        float flameVar_streamChunkSpawnFireMaxLifeFrac;
        float flameVar_streamChunkFireMinLifeFrac;
        float flameVar_streamChunkFireMinLifeFracStart;
        float flameVar_streamChunkFireMinLifeFracEnd;
        float flameVar_streamChunkDripsMinLifeFrac;
        float flameVar_streamChunkDripsMinLifeFracStart;
        float flameVar_streamChunkDripsMinLifeFracEnd;
        float flameVar_streamChunkRotationRange;
        float flameVar_streamSizeRandSinWave;
        float flameVar_streamSizeRandCosWave;
        float flameVar_streamDripsChunkInterval;
        float flameVar_streamDripsChunkMinFrac;
        float flameVar_streamDripsChunkRandFrac;
        float flameVar_streamSmokeChunkInterval;
        float flameVar_streamSmokeChunkMinFrac;
        float flameVar_streamSmokeChunkRandFrac;
        float flameVar_streamChunkCullDistSizeFrac;
        float flameVar_streamChunkCullMinLife;
        float flameVar_streamChunkCullMaxLife;
        float flameVar_streamFuelSizeStart;
        float flameVar_streamFuelSizeEnd;
        float flameVar_streamFuelLength;
        float flameVar_streamFuelNumSegments;
        float flameVar_streamFuelAnimLoopTime;
        float flameVar_streamFlameSizeStart;
        float flameVar_streamFlameSizeEnd;
        float flameVar_streamFlameLength;
        float flameVar_streamFlameNumSegments;
        float flameVar_streamFlameAnimLoopTime;
        float flameVar_streamPrimaryLightRadius;
        float flameVar_streamPrimaryLightRadiusFlutter;
        float flameVar_streamPrimaryLightR;
        float flameVar_streamPrimaryLightG;
        float flameVar_streamPrimaryLightB;
        float flameVar_streamPrimaryLightFlutterR;
        float flameVar_streamPrimaryLightFlutterG;
        float flameVar_streamPrimaryLightFlutterB;
        float flameVar_fireLife;
        float flameVar_fireLifeRand;
        float flameVar_fireSpeedScale;
        float flameVar_fireSpeedScaleRand;
        float flameVar_fireVelocityAddZ;
        float flameVar_fireVelocityAddZRand;
        float flameVar_fireVelocityAddSideways;
        float flameVar_fireGravity;
        float flameVar_fireGravityEnd;
        float flameVar_fireMaxRotVel;
        float flameVar_fireFriction;
        float flameVar_fireEndSizeAdd;
        float flameVar_fireStartSizeScale;
        float flameVar_fireEndSizeScale;
        float flameVar_fireBrightness;
        float flameVar_dripsLife;
        float flameVar_dripsLifeRand;
        float flameVar_dripsSpeedScale;
        float flameVar_dripsSpeedScaleRand;
        float flameVar_dripsVelocityAddZ;
        float flameVar_dripsVelocityAddZRand;
        float flameVar_dripsVelocityAddSideways;
        float flameVar_dripsGravity;
        float flameVar_dripsGravityEnd;
        float flameVar_dripsMaxRotVel;
        float flameVar_dripsFriction;
        float flameVar_dripsEndSizeAdd;
        float flameVar_dripsStartSizeScale;
        float flameVar_dripsEndSizeScale;
        float flameVar_dripsBrightness;
        float flameVar_smokeLife;
        float flameVar_smokeLifeRand;
        float flameVar_smokeSpeedScale;
        float flameVar_smokeVelocityAddZ;
        float flameVar_smokeGravity;
        float flameVar_smokeGravityEnd;
        float flameVar_smokeMaxRotation;
        float flameVar_smokeMaxRotVel;
        float flameVar_smokeFriction;
        float flameVar_smokeEndSizeAdd;
        float flameVar_smokeStartSizeAdd;
        float flameVar_smokeOriginSizeOfsZScale;
        float flameVar_smokeOriginOfsZ;
        float flameVar_smokeFadein;
        float flameVar_smokeFadeout;
        float flameVar_smokeMaxAlpha;
        float flameVar_smokeBrightness;
        float flameVar_smokeOriginOffset;
        float flameVar_collisionSpeedScale;
        float flameVar_collisionVolumeScale;
        const char* name;
        Material* fire;
        Material* smoke;
        Material* heat;
        Material* drips;
        Material* streamFuel;
        Material* streamFuel2;
        Material* streamFlame;
        Material* streamFlame2;
        const char* flameOffLoopSound;
        const char* flameIgniteSound;
        const char* flameOnLoopSound;
        const char* flameCooldownSound;
    };


    struct WeaponCamoMaterial
    {
        unsigned __int16 replaceFlags;
        unsigned __int16 numBaseMaterials;
        Material** baseMaterials;
        Material** camoMaterials;
        float shaderConsts[8];
    };


    struct FxElemVec3Range
    {
        vec3_t base;
        vec3_t amplitude;
    };


    struct FxElemVelStateInFrame
    {
        FxElemVec3Range velocity;
        FxElemVec3Range totalDelta;
    };


    const struct FxElemVelStateSample
    {
        FxElemVelStateInFrame local;
        FxElemVelStateInFrame world;
    };


    struct FxElemVisualState
    {
        char color[4];
        float rotationDelta;
        float rotationTotal;
        float size[2];
        float scale;
    };


    const struct FxElemVisStateSample
    {
        FxElemVisualState base;
        FxElemVisualState amplitude;
    };


    struct FxElemMarkVisuals
    {
        Material* materials[2];
    };


    struct FxTrailDef
    {
        int scrollTimeMsec;
        int repeatDist;
        int splitDist;
        int vertCount;
        FxTrailVertex* verts;
        int indCount;
        unsigned __int16* inds;
    };


    struct FxSpotLightDef
    {
        float fovInnerFraction;
        float startRadius;
        float endRadius;
    };


    struct ddlStructDef_t
    {
        const char* name;
        int size;
        int memberCount;
        ddlMemberDef_t* members;
        ddlHash_t* hashTable;
    };


    struct ddlEnumDef_t
    {
        const char* name;
        int memberCount;
        const char** members;
        ddlHash_t* hashTable;
    };


    struct GlassDef
    {
        const char* name;
        int maxHealth;
        float thickness;
        float minShardSize;
        float maxShardSize;
        float shardLifeProbablility;
        int maxShards;
        Material* pristineMaterial;
        Material* crackedMaterial;
        Material* shardMaterial;
        const char* crackSound;
        const char* shatterShound;
        const char* autoShatterShound;
        FxEffectDef* crackEffect;
        FxEffectDef* shatterEffect;
    };


    struct XSurfaceCollisionTree
    {
        vec3_t trans;
        vec3_t scale;
        unsigned int nodeCount;
        XSurfaceCollisionNode* nodes;
        unsigned int leafCount;
        XSurfaceCollisionLeaf* leafs;
    };


    struct PhysGeomInfo
    {
        BrushWrapper* brush;
        int type;
        vec3_t orientation[3];
        vec3_t offset;
        vec3_t halfLengths;
    };

    /* struct __cppobj ID3D11InputLayout : ID3D11DeviceChild
    {
    };*/


    struct GfxLightRegionAxis
    {
        vec3_t dir;
        float midPoint;
        float halfSize;
    };


    struct ScriptCondition
    {
        bool fireOnTrue;
        int constructID;
        int blockID;
        ScriptCondition* next;
    };


    struct textExp_s
    {
        ExpressionStatement textExp;
    };


    struct gameMsgDef_s
    {
        int gameMsgWindowIndex;
        int gameMsgWindowMode;
    };


    struct columnInfo_s
    {
        int elementStyle;
        int maxChars;
        rectDef_s rect;
    };


    struct listBoxDef_s
    {
        int mousePos;
        int cursorPos[1];
        int startPos[1];
        int endPos[1];
        int drawPadding;
        float elementWidth;
        float elementHeight;
        int numColumns;
        float special;
        columnInfo_s columnInfo[16];
        int notselectable;
        int noScrollBars;
        int usePaging;
        vec4_t selectBorder;
        vec4_t disableColor;
        vec4_t focusColor;
        vec4_t elementHighlightColor;
        vec4_t elementBackgroundColor;
        Material* selectIcon;
        Material* backgroundItemListbox;
        Material* highlightTexture;
        int noBlinkingHighlight;
        MenuRow* rows;
        int maxRows;
        int rowCount;
    };


    struct multiDef_s
    {
        const char* dvarList[32];
        const char* dvarStr[32];
        float dvarValue[32];
        int count;
        int actionOnEnterPressOnly;
        int strDef;
    };


    struct profileMultiDef_s
    {
        const char* profileVarList[32];
        const char* profileVarStr[32];
        float profileVarValue[32];
        int count;
        int actionOnEnterPressOnly;
        int strDef;
    };


    struct editFieldDef_s
    {
        int cursorPos[1];
        float minVal;
        float maxVal;
        float defVal;
        float range;
        int maxChars;
        int maxCharsGotoNext;
        int maxPaintChars;
        int paintOffset;
    };


    struct enumDvarDef_s
    {
        const char* enumDvarName;
    };


    struct FxTrailVertex
    {
        vec2_t pos;
        vec2_t normal;
        float texCoord;
    };


    struct ddlMemberDef_t
    {
        const char* name;
        int size;
        int offset;
        int type;
        int externalIndex;
        unsigned int rangeLimit;
        unsigned int serverDelta;
        unsigned int clientDelta;
        int arraySize;
        int enumIndex;
        int permission;
    };


    struct ddlHash_t
    {
        int hash;
        int index;
    };


    struct XSurfaceCollisionAabb
    {
        unsigned __int16 mins[3];
        unsigned __int16 maxs[3];
    };


    struct __declspec(align(16)) XSurfaceCollisionNode
    {
        XSurfaceCollisionAabb aabb;
        unsigned __int16 childBeginIndex;
        unsigned __int16 childCount;
    };


    struct XSurfaceCollisionLeaf
    {
        unsigned __int16 triangleBeginIndex;
    };


    struct __declspec(align(16)) BrushWrapper
    {
        vec3_t mins;
        int contents;
        vec3_t maxs;
        unsigned int numsides;
        cbrushside_t* sides;
        int axial_cflags[2][3];
        int axial_sflags[2][3];
        unsigned int numverts;
        vec3_t* verts;
        cplane_s* planes;
    };


    struct MenuRow
    {
        MenuCell* cells;
        char* eventName;
        char* onFocusEventName;
        bool disableArg;
        int status;
        int name;
    };


    struct MenuCell
    {
        int type;
        int maxChars;
        char* stringValue;
    };

#ifndef __zonecodegenerator
} // namespace T6
#endif

#endif

// EOF
