struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 63 classes
	//0. AssetBundle
	void RegisterClass_AssetBundle();
	RegisterClass_AssetBundle();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//4. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//5. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//6. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//7. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//8. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//9. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//10. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//11. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//12. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//13. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//14. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//15. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//16. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//17. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//18. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//19. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//20. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//21. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//22. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//23. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//24. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//25. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//26. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//27. WebCamTexture
	void RegisterClass_WebCamTexture();
	RegisterClass_WebCamTexture();

	//28. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//29. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//30. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//31. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//32. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//33. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//34. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//35. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//36. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//37. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//38. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//39. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//40. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//41. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//42. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//43. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//44. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//45. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//46. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//47. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//48. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//49. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//50. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//51. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//52. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//53. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//54. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//55. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//56. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//57. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//58. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//59. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//60. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//61. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//62. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
