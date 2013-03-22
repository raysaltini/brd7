<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function br_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function br_imagecache_default_presets() {
  $items = array(
    'Services_thumbnail' => array(
      'presetname' => 'Services_thumbnail',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '90',
            'height' => '',
            'upscale' => 1,
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_crop',
          'data' => array(
            'width' => '90',
            'height' => '90',
            'xoffset' => 'center',
            'yoffset' => 'center',
          ),
        ),
      ),
    ),
    'about_page_projects' => array(
      'presetname' => 'about_page_projects',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '100',
            'height' => '60',
          ),
        ),
      ),
    ),
    'about_side_workers' => array(
      'presetname' => 'about_side_workers',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '215px',
            'height' => '162px',
            'upscale' => 1,
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_rotate',
          'data' => array(
            'degrees' => '13',
            'random' => 0,
            'bgcolor' => '',
          ),
        ),
      ),
    ),
    'blog-main-image' => array(
      'presetname' => 'blog-main-image',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '200px',
            'height' => '',
            'upscale' => 1,
          ),
        ),
      ),
    ),
    'blog-preview-image' => array(
      'presetname' => 'blog-preview-image',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '40%',
            'height' => '40%',
            'upscale' => 0,
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_crop',
          'data' => array(
            'width' => '300',
            'height' => '400',
            'xoffset' => '',
            'yoffset' => '',
          ),
        ),
      ),
    ),
    'blog-thumb-image' => array(
      'presetname' => 'blog-thumb-image',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '160',
            'height' => '130',
          ),
        ),
      ),
    ),
    'customer-thumb' => array(
      'presetname' => 'customer-thumb',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '80',
            'height' => '76',
          ),
        ),
      ),
    ),
    'home_page_clients' => array(
      'presetname' => 'home_page_clients',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '118px',
            'height' => '74px',
            'upscale' => 1,
          ),
        ),
      ),
    ),
    'photo-worker' => array(
      'presetname' => 'photo-worker',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '200',
            'height' => '267',
          ),
        ),
      ),
    ),
    'photo-worker-flash' => array(
      'presetname' => 'photo-worker-flash',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '190',
            'height' => '190',
          ),
        ),
      ),
    ),
    'photo-worker-thumb' => array(
      'presetname' => 'photo-worker-thumb',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '140',
            'height' => '110',
          ),
        ),
      ),
    ),
    'project-big-image' => array(
      'presetname' => 'project-big-image',
      'actions' => array(),
    ),
    'project-big-thumb' => array(
      'presetname' => 'project-big-thumb',
      'actions' => array(
        '0' => array(
          'weight' => '-10',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '50%',
            'height' => '50%',
            'upscale' => 0,
          ),
        ),
        '1' => array(
          'weight' => '-9',
          'module' => 'imagecache',
          'action' => 'imagecache_crop',
          'data' => array(
            'width' => '500',
            'height' => '195',
            'xoffset' => 'left',
            'yoffset' => 'top',
          ),
        ),
      ),
    ),
    'project-category-thumb' => array(
      'presetname' => 'project-category-thumb',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '30%',
            'height' => '30%',
            'upscale' => 0,
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_crop',
          'data' => array(
            'width' => '120',
            'height' => '120',
            'xoffset' => '',
            'yoffset' => '',
          ),
        ),
      ),
    ),
    'project-featured' => array(
      'presetname' => 'project-featured',
      'actions' => array(
        '0' => array(
          'weight' => '-9',
          'module' => 'imagecache',
          'action' => 'imagecache_crop',
          'data' => array(
            'width' => '183',
            'height' => '170',
            'xoffset' => '',
            'yoffset' => '',
          ),
        ),
      ),
    ),
    'project-gallery-img' => array(
      'presetname' => 'project-gallery-img',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '281',
            'height' => '185',
          ),
        ),
      ),
    ),
    'project-gallery-thumb' => array(
      'presetname' => 'project-gallery-thumb',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '85',
            'height' => '61',
          ),
        ),
      ),
    ),
    'project-thumb' => array(
      'presetname' => 'project-thumb',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_resize',
          'data' => array(
            'width' => '221px',
            'height' => '124px',
          ),
        ),
      ),
    ),
    'project_banner' => array(
      'presetname' => 'project_banner',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '630px',
            'height' => '',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'project_page_logo' => array(
      'presetname' => 'project_page_logo',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '171px',
            'height' => '97px',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'project_page_side_img' => array(
      'presetname' => 'project_page_side_img',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '112px',
            'height' => '100%',
            'upscale' => 0,
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_crop',
          'data' => array(
            'width' => '112px',
            'height' => '63px',
            'xoffset' => 'center',
            'yoffset' => 'top',
          ),
        ),
      ),
    ),
    'user-thumb' => array(
      'presetname' => 'user-thumb',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '40',
            'height' => '37',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function br_node_info() {
  $items = array(
    'blog' => array(
      'name' => t('Blog entry'),
      'module' => 'features',
      'description' => t('Blog content. Blog section is built on this content type.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'customer_profile' => array(
      'name' => t('Customer'),
      'module' => 'features',
      'description' => t('Customer content type.'),
      'has_title' => '1',
      'title_label' => t('Customer Full Name'),
      'has_body' => '1',
      'body_label' => t('About Customer'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'events' => array(
      'name' => t('Events'),
      'module' => 'features',
      'description' => t('Drupal Blink Events'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'news' => array(
      'name' => t('News'),
      'module' => 'features',
      'description' => t('News content-type.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'page' => array(
      'name' => t('Page'),
      'module' => 'features',
      'description' => t('A <em>page</em>, similar in form to a <em>story</em>, is a simple method for creating and displaying information that rarely changes, such as an "About us" section of a website. By default, a <em>page</em> entry does not allow visitor comments and is not featured on the site\'s initial home page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'project' => array(
      'name' => t('Project'),
      'module' => 'features',
      'description' => t('Project content. Portfolio section is built on this content type.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'service' => array(
      'name' => t('Service'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'slideshow' => array(
      'name' => t('Slideshow'),
      'module' => 'features',
      'description' => t('Slideshow items at home page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'training_slider' => array(
      'name' => t('Training slider'),
      'module' => 'features',
      'description' => t('To increase real estate on the training page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'module' => 'features',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function br_views_api() {
  return array(
    'api' => '2',
  );
}
